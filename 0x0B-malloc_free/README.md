# Project: 0x0B. C - malloc, free

## Table of Contents
* [Description](#description)
* [Files](#files)
* [Requirements](#requirements)
* [Usage](#usage)
* [Author](#author)

## Description
This project covers various tasks related to dynamic memory allocation in C using `malloc` and `free`. It includes functions for creating arrays, duplicating strings, concatenating strings, and more. The project aims to reinforce the concepts of automatic and dynamic allocation, as well as the use of `malloc` and `free`.

## Files
* `0-create_array.c`: Function that creates an array of characters and initializes it with a specific character.
* `1-strdup.c`: Function that duplicates a string.
* `2-str_concat.c`: Function that concatenates two strings.
* `3-alloc_grid.c`: Function that allocates memory for a 2D grid of integers and initializes it to 0.
* `4-free_grid.c`: Function that frees memory allocated for a 2D grid of integers.
* `100-argstostr.c`: Function that concatenates all the arguments passed to the program.
* `101-strtow.c`: Function that splits a string into words.

## Requirements
* Allowed editors: vi, vim, emacs
* Compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`
* All files should end with a new line.
* A `README.md` file is mandatory.
* Code should follow the Betty style.
* No more than 5 functions per file.
* Only `malloc` and `free` from the C standard library are allowed. Other functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden.
* The prototypes of all functions and `_putchar` should be included in a header file called `main.h`.
* Do not push `_putchar.c`; it will be provided separately.
* Code should not use global variables.
* Return `NULL` on failure where specified.
* Return `NULL` if `str` is `NULL` or an empty string where specified.

## Usage
To compile the programs, use the provided `gcc` command for each task. For example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o create_array
```

Then, run the compiled program:

```bash
./create_array
```

Make sure to follow the instructions provided in each task's description for input and expected output.

## Author
**Antony Aboud**