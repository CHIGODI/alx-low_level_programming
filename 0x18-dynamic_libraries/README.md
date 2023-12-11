# Project: 0x18 - Dynamic Libraries

## Overview
This project delves into the realm of dynamic libraries in C, shell scripting, and the integration of C functions with Python.

### Project Structure
- **libdynamic.so**: Dynamic library housing various essential C functions.
- **main.h**: Header file containing prototypes for the functions.
- **1-create_dynamic_lib.sh**: Bash script to create a dynamic library.
- **100-operations.so**: Dynamic library facilitating the integration of C functions with Python.
- **101-make_me_win.sh**: Shell script created for code injection in a specific server scenario.

## Tasks Completed
1. **A Library is Not a Luxury but One of the Necessities of Life**
    - Created `libdynamic.so` comprising a collection of fundamental C functions.
    - Ensured the functionality of the library using provided `main.c`.
2. **Without Libraries, What Have We? We Have No Past and No Future**
    - Implemented `1-create_dynamic_lib.sh` to generate `liball.so` from all `.c` files present in the directory.
3. **Let's Call C Functions from Python**
    - Developed `100-operations.so` for seamless integration of C functions with Python.
4. **Code Injection: Win the Giga Millions!**
    - Designed `101-make_me_win.sh` specifically for injecting code in a particular server scenario.

## Execution Guidelines
- **Task 1 & 2**:
    - Compile `main.c` with the created dynamic libraries: `gcc -Wall -pedantic -Werror -Wextra -L. main.c -ldynamic -o output_file`.
    - If required, set `LD_LIBRARY_PATH`: `export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`.
    - Run the compiled output: `./output_file`.
- **Task 3**:
    - Utilize the Python script `100-tests.py` to showcase the integration of C functions: `python3 100-tests.py`.
- **Task 4**:
    - Execute `101-make_me_win.sh` precisely 98 seconds before launching the `gm` program as specified in the task.

## Additional Notes
- **Code Safety**: The code adheres to ALX requirements, including style gu
