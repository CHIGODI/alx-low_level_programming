# 0x0E. C - Structures, typedef

## Overview

This project explores the concepts of structures and typedef in the C programming language. The project includes several tasks to understand and work with structures and typedefs.

## Tasks

1. **Poppy**: Define a new type `struct dog` with elements `name` (char *), `age` (float), and `owner` (char *).

2. **A dog is the only thing on earth that loves you more than you love yourself**: Write a function to initialize a variable of type `struct dog`.

3. **Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read**: Write a function to print a `struct dog`. If any element of the structure is NULL, print (nil) for that element.

4. **A door is what a dog is perpetually on the wrong side of**: Define a new type `dog_t` as an alias for the `struct dog` type.

5. **How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg**: Write a function to free memory allocated for a `dog_t` structure.

## Requirements

- Code is written in C and compiled with `gcc` using options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- The project follows the Betty style for code formatting.
- Header files are include-guarded.
- No global variables are used.
- The C standard library functions allowed include `printf`, `malloc`, `free`, and `exit`.

## Author

Antony Aboud