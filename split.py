#!/usr/bin/env python3

# SPDX-FileCopyrightText: © 2025 AngheloAlf
# SPDX-License-Identifier: MIT

import argparse
from pathlib import Path

def write_buffer(current_name: str|None, buffer: list[str], directory: Path):
    if current_name is not None:
        compile_unit = directory / Path(current_name)
        print(f"Writing {compile_unit}")
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
                    enums_by_contents[body] = current_enum_name
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

                new_line = trailing_line + current_enum_name + line.split("}")[1]
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
            f.write(f"typedef enum {{\n")
            for entry in body.split(","):
                if entry != "":
                    f.write(f"    {entry},\n")
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
        enums_by_contents = parse_anonymous_enums(contents)
        contents = set_anonymous_enums(contents, enums_by_contents)

        split(contents, directory, tu_prefix)

        # Emit the anonymous enums' so we don't lose their bodies.
        emit_anonymous_enums(directory, enums_by_contents)

main()
