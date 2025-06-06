#!/usr/bin/env python3

# SPDX-FileCopyrightText: © 2025 AngheloAlf
# SPDX-License-Identifier: MIT

import argparse
from pathlib import Path

KNOWN_ANONYMOUS_STRUCTS: dict[str, str] = {
    "union_pon_gc_c_222": "uObjSprite",
    "union_pon_gc_tex_c_7332": "uObjTxtr",
    "union_pon_gc_tex_c_7116": "uObjBg",
}
KNOWN_ANONYMOUS_ENUMS: dict[str, str] = {
}

def write_buffer(current_name: str|None, buffer: list[str], directory: Path):
    if current_name is not None:
        compile_unit = directory / Path(current_name)
        # print(f"Writing {compile_unit}")
        compile_unit.parent.mkdir(parents=True, exist_ok=True)
        with compile_unit.open("w") as f_unit:
            f_unit.writelines(buffer)
        buffer.clear()

def split(contents: list[str], directory: Path, tu_prefix: str):
    buffer: list[str] = []
    current_name: str|None = None

    prev_line = ""
    for line in contents:
        if line.startswith("    Compile unit: "):
            write_buffer(current_name, buffer, directory)
            current_name = line.split("    Compile unit: ")[1].strip().split(tu_prefix)[1].replace("\\", "/")

        buffer.append(prev_line)
        prev_line = line

    buffer.append(prev_line)
    write_buffer(current_name, buffer, directory)


def parse_anonymous_enums(contents: list[str]) -> dict[str, str]:
    current_enum_name: str|None = None
    current_enum_contents: list[str] = []
    enums_by_contents: dict[str, str] = {}
    for line in contents:
        if current_enum_name is not None:
            if "}" in line:
                body = "".join(current_enum_contents)
                if body not in enums_by_contents:
                    name = current_enum_name
                    name = KNOWN_ANONYMOUS_ENUMS.get(name, name)
                    enums_by_contents[body] = name
                current_enum_name = None
                current_enum_contents.clear()
                continue
            current_enum_contents.append(line.strip())
        else:
            if "enum /* @" not in line:
                continue
            current_enum_name = line.split("enum /* ")[1].split(" */ {")[0]

    return enums_by_contents

def set_anonymous_enums(contents: list[str], enums_by_contents: dict[str, str]) -> list[str]:
    new_contents: list[str] = []

    trailing_line: str|None = None
    current_enum_contents: list[str] = []
    for line in contents:
        if trailing_line is not None:
            if "}" in line:
                body = "".join(current_enum_contents)
                current_enum_name = enums_by_contents.get(body)
                assert current_enum_name is not None, body

                new_line = trailing_line + current_enum_name + "}".join(line.split("}")[1:])
                new_contents.append(new_line)

                trailing_line = None
                current_enum_contents.clear()
                continue
            current_enum_contents.append(line.strip())
        else:
            if "enum /* @" not in line:
                new_contents.append(line)
                continue
            trailing_line = line.split("enum /* ")[0]

    return new_contents

def emit_anonymous_enums(directory: Path, enums_by_contents: dict[str, str]):
    with (directory / "anonymous_enums.h").open("w") as f:
        for body, name in enums_by_contents.items():
            f.write(f"typedef enum /* {name} */ {{\n")
            for entry in body.split(","):
                if entry != "":
                    f.write(f"    {entry},\n")
            f.write(f"}} {name};\n")

def parse_anonymous_structs_and_unions(contents: list[str]) -> dict[str, tuple[str, str]]:
    current_unit = "no_name"
    struct_index = 0
    kind = "struct"
    braces_count = 0
    current_struct_contents: list[str] = []
    structs_by_contents: dict[str, tuple[str, str]] = {}
    for line in contents:
        if braces_count > 0:
            end = len(line)
            if "{" in line:
                end = line.index("{")
            braces_count -= line.count("}", 0, end)

            if braces_count > 0:
                current_struct_contents.append((braces_count * "    ") + line.strip() + "\n")
                braces_count -= line.count("}", end)
                braces_count += line.count("{")
            else:
                body = "".join(current_struct_contents)
                if body not in structs_by_contents:
                    name = f"{kind}_{current_unit.replace('.', '_')}_{struct_index}"
                    name = KNOWN_ANONYMOUS_STRUCTS.get(name, name)
                    structs_by_contents[body] = (name, kind)
                current_struct_contents.clear()

        if braces_count == 0 and (line.endswith("struct {\n") or line.endswith("union {\n")):
            if line.endswith("struct {\n"):
                kind = "struct"
            else:
                kind = "union"
            braces_count += 1

        if "    Compile unit: " in line:
            current_unit = line.strip().split("\\")[-1]
            struct_index = 0
        assert braces_count >= 0, line
        struct_index += 1

    assert braces_count == 0, braces_count

    return structs_by_contents

def set_anonymous_structs_and_unions(contents: list[str], structs_by_contents: dict[str, tuple[str, str]]) -> list[str]:
    new_contents: list[str] = []

    braces_count = 0

    trailing_line: str|None = None
    current_struct_contents: list[str] = []
    for line in contents:
        if trailing_line is not None:
            end = len(line)
            if "{" in line:
                end = line.index("{")
            braces_count -= line.count("}", 0, end)

            if braces_count > 0:
                current_struct_contents.append((braces_count * "    ") + line.strip() + "\n")
                braces_count -= line.count("}", end)
                braces_count += line.count("{")
            else:
                body = "".join(current_struct_contents)
                current_struct_contents.clear()
                current_struct_name = structs_by_contents.get(body)
                assert current_struct_name is not None, f"\n{body=}\n{line=}"

                line = trailing_line + current_struct_name[0] + "}".join(line.split("}")[1:])
                if line.endswith("struct {\n") or line.endswith("union {\n"):
                    if line.endswith("struct {\n"):
                        kind = "struct"
                    else:
                        kind = "union"
                    trailing_line = line.split(f"{kind} {{")[0]
                    braces_count += 1
                else:
                    new_contents.append(line)
                    trailing_line = None

        elif line.endswith("struct {\n") or line.endswith("union {\n"):
            if line.endswith("struct {\n"):
                kind = "struct"
            else:
                kind = "union"
            trailing_line = line.split(f"{kind} {{")[0]
            braces_count += 1
        else:
            new_contents.append(line)
        assert braces_count >= 0, line

    assert braces_count == 0, braces_count

    return new_contents

def emit_anonymous_structs_and_unions(directory: Path, structs_by_contents: dict[str, tuple[str, str]]):
    with (directory / "anonymous_structs_and_unions.h").open("w") as f:
        for body, (name, kind) in structs_by_contents.items():
            f.write(f"typedef {kind} /* {name} */ {{\n")
            f.write(body)
            f.write(f"}} {name};\n")

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("dwarf_file")

    parser.add_argument("--tu_prefix", default="C:\\users\\tsuji\\")

    args = parser.parse_args()

    dwarf_file = Path(args.dwarf_file)
    tu_prefix = str(args.tu_prefix)

    directory = Path(dwarf_file.stem.split("_dwarf")[0])
    print(directory)

    with dwarf_file.open() as f:
        contents = f.readlines()

        # Deduplicate anonymous enums by giving them semi-arbitrary names and yeeting their bodies
        print("Identifying anonymous enums")
        enums_by_contents = parse_anonymous_enums(contents)
        print("Deduplicating anonymous enums")
        contents = set_anonymous_enums(contents, enums_by_contents)

        print("Identifying anonymous structs/unions")
        structs_by_contents = parse_anonymous_structs_and_unions(contents)
        print("Deduplicating anonymous structs/unions")
        contents = set_anonymous_structs_and_unions(contents, structs_by_contents)

        print("Splitting")
        split(contents, directory, tu_prefix)

        # Emit the anonymous enums' so we don't lose their bodies.
        emit_anonymous_enums(directory, enums_by_contents)
        emit_anonymous_structs_and_unions(directory, structs_by_contents)

        print("Done")

main()
