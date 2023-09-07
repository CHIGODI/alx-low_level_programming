---

# 0x0C. C - More malloc, free

This repository contains a series of C programming tasks related to memory allocation and deallocation using `malloc`, `free`, `realloc`, and other functions.

## Table of Contents

- [Tasks](#tasks)
- [Requirements](#requirements)
- [Usage](#usage)
- [Author](#author)

## Tasks

### Task 0: Trust no one

Write a function that allocates memory using `malloc`. If `malloc` fails, the function should cause normal process termination with a status value of 98.

### Task 1: string_nconcat

Write a function that concatenates two strings. The returned pointer shall point to a newly allocated space in memory, containing the first string followed by the first `n` bytes of the second string.

### Task 2: \_calloc

Write a function that allocates memory for an array using `malloc`. The memory is set to zero.

### Task 3: array_range

Write a function that creates an array of integers containing values from `min` to `max` (inclusive).

### Task 4: \_realloc (Advanced)

Write a function that reallocates a memory block using `malloc` and `free`.

### Task 5: We must accept finite disappointment, but never lose infinite hope (Advanced)

Write a program that multiplies two positive numbers.

## Requirements

- All code is written in C.
- Code is compiled using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code is tested using a provided main file or equivalent.
- Code follows the Betty style guide.
- Only allowed standard library functions are `malloc`, `free`, and `exit`.

## Usage

Compile the programs using `gcc` and execute them. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-malloc_checked.c 0-main.c -o malloc_checked
./malloc_checked
```

## Author

Antony Aboud

---

