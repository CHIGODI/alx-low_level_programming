# Variadic Functions in C

This project explores the concept of variadic functions in C, teaching you how to work with them using `va_start`, `va_arg`, and `va_end` macros. Additionally, you'll learn about the use of the `const` type qualifier.

## Tasks

### Task 0: Beauty is variable, ugliness is constant
Write a function `sum_them_all` that returns the sum of its parameters. If the number of parameters is 0, it returns 0.

### Task 1: To be is to be the value of a variable
Write a function `print_numbers` that prints numbers followed by a new line. It takes a separator string and a variable number of integers.

### Task 2: One woman's constant is another woman's variable
Write a function `print_strings` that prints strings followed by a new line. It takes a separator string and a variable number of strings. If a string is `NULL`, it prints "(nil)".

### Task 3: To be is a to be the value of a variable
Write a function `print_all` that prints various types of arguments based on a format string. The format string specifies the types: 'c' for char, 'i' for integer, 'f' for float, and 's' for string. Any other character in the format string should be ignored.

## How to Compile

Use the provided `gcc` commands for each task to compile the source code.

Example:
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o task0
```

## Usage

You can use the main.c files provided in each task's directory to test your functions.

Example:
```
./task0
```