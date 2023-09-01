# Project: C - Static Libraries

## Introduction

This project focuses on static libraries in the C programming language. We'll create a static library called `libmy.a` containing various C functions and learn how to work with static libraries in C. The project consists of two main tasks:

## Task 0: A library is not a luxury but one of the necessities of life

In this task, we create the static library `libmy.a`, which contains the following functions:

- `_putchar`: A function to print a character.
- `_islower`: A function to check if a character is lowercase.
- `_isalpha`: A function to check if a character is alphabetic.
- `_abs`: A function to compute the absolute value of an integer.
- `_isupper`: A function to check if a character is uppercase.
- `_isdigit`: A function to check if a character is a digit.
- `_strlen`: A function to calculate the length of a string.
- `_puts`: A function to print a string.
- `_strcpy`: A function to copy a string.
- `_atoi`: A function to convert a string to an integer.
- `_strcat`: A function to concatenate two strings.
- `_strncat`: A function to concatenate two strings with a limit.
- `_strncpy`: A function to copy a string with a limit.
- `_strcmp`: A function to compare two strings.
- `_memset`: A function to fill memory with a constant byte.
- `_memcpy`: A function to copy memory area.
- `_strchr`: A function to locate a character in a string.
- `_strspn`: A function to get the length of a prefix substring.
- `_strpbrk`: A function to search a string for any of a set of bytes.
- `_strstr`: A function to locate a substring in a string.

## Task 1: Without libraries, what have we? We have no past and no future

In this task, we create a bash script named `create_static_lib.sh`. This script compiles all `.c` files in the current directory into object files and then creates a static library named `liball.a` from those object files.

## Environment and Requirements

- The code is written in C.
- Compilation is done on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- No global variables are used.
- No standard library functions (e.g., `printf`, `puts`) are used except for `_putchar`.
- Code follows the Betty style guidelines.
- Each C file contains no more than 5 functions.
- A header file named `main.h` is used and contains function prototypes.
- The `README.md` file provides an overview of the project and explains the purpose of each script.

## Usage

### Task 0:

To create `libmy.a`:

```bash
gcc -c *.c
ar -rc libmy.a *.o
```

To check the content of `libmy.a`:

```bash
ar -t libmy.a
```

To display the symbols in `libmy.a`:

```bash
nm libmy.a
```

To compile and link a program with `libmy.a`:

```bash
gcc -std=gnu89 main.c -L. -lmy -o my_program
```

### Task 1:

To create `liball.a`:

```bash
./create_static_lib.sh
```

## Conclusion

This project helps us understand the concept of static libraries in C, how to create them, and how to use them. It reinforces our knowledge of various C functions and their implementation.