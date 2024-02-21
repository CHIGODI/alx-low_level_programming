# Project: 0x1C. C - Makefiles

## Overview

This project focuses on learning and understanding Makefiles in the context of C programming. The main objectives include:

- Understanding what Make and Makefiles are.
- Knowing when, why, and how to use Makefiles.
- Working with rules, both explicit and implicit.
- Utilizing variables in Makefiles.

## Tasks

### Task 0: make -f 0-Makefile
- Create the first Makefile with the following requirements:
  - Name of the executable: `school`
  - Rule: `all`
  - The `all` rule builds the executable.
  - No variables are used.

### Task 1: make -f 1-Makefile
- Create a Makefile with the following requirements:
  - Name of the executable: `school`
  - Rule: `all`
  - The `all` rule builds the executable.
  - Variables: `CC` (compiler), `SRC` (.c files).

### Task 2: make -f 2-Makefile
- Create a more useful Makefile with the following requirements:
  - Name of the executable: `school`
  - Rule: `all`
  - The `all` rule builds the executable.
  - Variables: `CC` (compiler), `SRC` (.c files), `OBJ` (.o files), `NAME` (executable name).
  - The `all` rule should recompile only the updated source files.

### Task 3: make -f 3-Makefile
- Expand the Makefile with additional rules:
  - `clean`: Deletes Emacs, Vim temporary files, and the executable.
  - `oclean`: Deletes object files.
  - `fclean`: Deletes Emacs, Vim temporary files, the executable, and object files.
  - `re`: Forces recompilation of all source files.
  - Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM` (program to delete files).
  - The rules should never fail.

### Task 4: A complete Makefile
- Create a comprehensive Makefile with the following requirements:
  - Name of the executable: `school`
  - Rules: `all`, `clean`, `fclean`, `oclean`, `re`
  - Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS` (compiler flags).
  - The `all` rule should recompile only the updated source files.
  - The rules should never fail.

### Task 5: Island Perimeter
- Implement a Python function `island_perimeter(grid)` that calculates the perimeter of an island described in a grid.
- The grid consists of 0s (water) and 1s (land).
- The island doesn't have "lakes" (water inside that isn't connected to the water around the island).

## Instructions for Running

To compile and execute the C programs, use the provided Makefiles by running the `make` command followed by the appropriate file name. For example:

```bash
make -f 0-Makefile
./school
