# Puzzle collection DWARF

This repository contains a dump of the DWARF debugging information contained
in the Nintendo Gamecube game "Nintendo Puzzle Collection".

The top-level `.h` files contain the full dump for each game, while the
corresponding folders contains splitted files generated from the full dumps.
The directories in these files aim to mimic the original directory structure.

## How it was generated

The full DWARF dumps were generated using [`dtk`](https://github.com/encounter/decomp-toolkit).

```bash
./dtk dwarf dump Dr_MARIO.plf --include-erased -o Dr_MARIO_dwarf.h
./dtk dwarf dump PANEPON.plf --include-erased -o PANEPON_dwarf.h
```

The file splits were genenerated using the `split.py` script.

```bash
./split.py Dr_MARIO_dwarf.h
./split.py PANEPON_dwarf.h
```
