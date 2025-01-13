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
        split(contents, directory, tu_prefix)


main()
