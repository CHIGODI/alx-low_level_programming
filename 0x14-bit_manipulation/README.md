# 0x14. C - Bit manipulation

This repository contains solutions to tasks related to bit manipulation in C.

## Tasks

1. **0-binary_to_uint.c**: Converts a binary number to an unsigned int.
2. **1-print_binary.c**: Prints the binary representation of a number without using arrays or malloc.
3. **2-get_bit.c**: Returns the value of a bit at a given index.
4. **3-set_bit.c**: Sets the value of a bit to 1 at a given index.
5. **4-clear_bit.c**: Sets the value of a bit to 0 at a given index.
6. **5-flip_bits.c**: Returns the number of bits needed to flip to get from one number to another.
7. **100-get_endianness.c**: Checks the endianness of the system (0 for big endian, 1 for little endian).
8. **101-password**: Contains the password for a program.

## Requirements

- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a newline.
- A README.md file at the root of the folder.
- Code should follow the Betty style.
- No global variables allowed.
- No more than 5 functions per file.
- Only allowed C standard library functions are malloc, free, and exit. The use of functions like printf, puts, calloc, realloc, etc., is forbidden.
- You are allowed to use _putchar.
- Don't push _putchar.c; the project uses its file.
- Prototypes of functions and _putchar should be included in a header file called main.h.
- All header files should be include guarded.

## How to Use

To compile and run the programs, use the provided compilation commands for each task.

For example, to compile and run the first task:

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o binary_to_uint
./binary_to_uint