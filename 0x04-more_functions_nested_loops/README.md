# 0x04. C - More Functions, More Nested Loops

This project is part of the ALX Software Engineering program and focuses on practicing C programming concepts related to functions and nested loops.

## Learning Objectives

By completing this project, you should be able to:
- Understand and use nested loops effectively.
- Define and use functions in C programming.
- Differentiate between function declaration and definition.
- Create prototypes for functions.
- Understand the scope of variables.
- Utilize GCC flags such as `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, and `-std=gnu89`.
- Work with header files and include them using `#include`.

## Requirements

- Allowed editors: vi, vim, emacs.
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All source code files should end with a new line.
- You must have a `README.md` file at the root of the project folder.
- Your code should follow the Betty style. Use `betty-style.pl` and `betty-doc.pl` for checking the style.
- No global variables allowed.
- No more than 5 functions per file.
- You are not allowed to use the standard library functions, except for `_putchar`.
- Use the `_putchar` function provided by the ALX team.
- The prototypes of all your functions and `_putchar` should be included in the `main.h` header file.

## Project Tasks

1. **isupper** - Write a function that checks for uppercase character.
   - Prototype: `int _isupper(int c);`

2. **isdigit** - Write a function that checks for a digit (0 through 9).
   - Prototype: `int _isdigit(int c);`

3. **Collaboration is Multiplication** - Write a function that multiplies two integers.
   - Prototype: `int mul(int a, int b);`

4. **The Numbers Speak for Themselves** - Write a function that prints the numbers from 0 to 9, followed by a new line.
   - Prototype: `void print_numbers(void);`

5. **I Believe in Numbers and Signs** - Write a function that prints the numbers from 0 to 9, followed by a new line. Do not print 2 and 4.
   - Prototype: `void print_most_numbers(void);`

6. **Numbers Constitute the Only Universal Language** - Write a function that prints 10 times the numbers from 0 to 14, followed by a new line.
   - Prototype: `void more_numbers(void);`

7. **The Shortest Distance Between Two Points is a Straight Line** - Write a function that draws a straight line in the terminal.
   - Prototype: `void print_line(int n);`

8. **I Feel Like I am Diagonally Parked in a Parallel Universe** - Write a function that draws a diagonal line on the terminal.
   - Prototype: `void print_diagonal(int n);`

9. **You are So Much Sunshine in Every Square Inch** - Write a function that prints a square.
   - Prototype: `void print_square(int size);`

10. **Fizz-Buzz** - Write a program that prints numbers from 1 to 100 with specific conditions.
   - If the number is a multiple of 3, print "Fizz" instead.
   - If the number is a multiple of 5, print "Buzz" instead.
   - If the number is a multiple of both 3 and 5, print "FizzBuzz" instead.
   - Each number or word should be separated by a space.

11. **Triangles** - Write a function that prints a triangle using the '#' character.
   - Prototype: `void print_triangle(int size);`

12. **The Problem of Distinguishing Prime Numbers** - Write a program that finds and prints the largest prime factor of the number 612852475143.

13. **Numbers Have Life; They're Not Just Symbols on Paper** (Advanced) - Write a function that prints an integer without using long, arrays, or pointers.
   - Prototype: `void print_number(int n);`

## How to Compile and Run

You can compile and run the individual task files using the provided `main.h` and `_putchar.c` files. For each task, follow these steps:

1. Compile the task source file along with `_putchar.c` and a test main file (if applicable).
   ```
   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c task-file.c main-file.c -o output-file
   ```

2. Run the compiled program.
   ```
   ./output-file
   ```

Remember to replace `task-file.c`, `main-file.c`, and `output-file` with the actual filenames as per the task you are working on.

## Author

Antony Chigodi Aboud.