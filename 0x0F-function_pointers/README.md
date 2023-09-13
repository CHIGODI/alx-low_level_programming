# Function Pointers in C

This repository contains C programs that demonstrate the use of function pointers and related concepts. It includes solutions to tasks covering various aspects of function pointers in C.

## Table of Contents

- [Tasks](#tasks)
  1. [What's my name](#task-0-whats-my-name)
  2. [If you spend too much time thinking about a thing, you'll never get it done](#task-1-if-you-spend-too-much-time-thinking-about-a-thing-youll-never-get-it-done)
  3. [To hell with circumstances; I create opportunities](#task-2-to-hell-with-circumstances-i-create-opportunities)
  4. [A goal is not always meant to be reached, it often serves simply as something to aim at](#task-3-a-goal-is-not-always-meant-to-be-reached-it-often-serves-simply-as-something-to-aim-at)
  5. [Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker](#task-4-most-hackers-are-young-because-young-people-tend-to-be-adaptable-as-long-as-you-remain-adaptable-you-can-always-be-a-good-hacker-advanced)

## Tasks

### Task 0: What's my name

- Function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *))`
- Example usage provided.

### Task 1: If you spend too much time thinking about a thing, you'll never get it done

- Function that executes a function given as a parameter on each element of an array.
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int))`
- Example usage provided.

### Task 2: To hell with circumstances; I create opportunities

- Function that searches for an integer in an array.
- Prototype: `int int_index(int *array, int size, int (*cmp)(int))`
- Example usage provided.

### Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at

- Program that performs simple arithmetic operations.
- Usage: `calc num1 operator num2`
- Supports addition, subtraction, multiplication, division, and modulo.
- Detailed requirements provided.

### Task 4: Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker (Advanced)

- Program that prints the opcodes of its own main function.
- Usage: `./main number_of_bytes`
- Prints opcodes in hexadecimal format.
- Detailed requirements and example provided.

---
