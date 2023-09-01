#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c ./*.c
ar -rc liball.a ./*.c
ranlib liball.a
