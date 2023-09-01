---

# 0x0A. C - argc, argv

## Description

This project contains C programs that demonstrate the usage of `argc` and `argv` in C programs. It includes programs that print program names, count arguments, print arguments, multiply numbers, and calculate the minimum number of coins for change.

## Files

- [0-whatsmyname.c](0-whatsmyname.c): Program that prints its name.
- [1-args.c](1-args.c): Program that prints the number of arguments passed into it.
- [2-args.c](2-args.c): Program that prints all arguments it receives.
- [3-mul.c](3-mul.c): Program that multiplies two numbers.
- [4-add.c](4-add.c): Program that adds positive numbers.
- [100-change.c](100-change.c): Program that calculates the minimum number of coins for change.

## Usage

### 0-whatsmyname.c

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
./mynameis
```

### 1-args.c

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
./nargs
./nargs hello
./nargs "hello, world"
./nargs hello, world
```

### 2-args.c

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
./args
./args "You can do anything, but not everything."
```

### 3-mul.c

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
./mul 2 3
./mul 2 -3
./mul 2 0
./mul 245 3245342
./mul
```

### 4-add.c

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
./add 1 1
./add 1 10 100 1000
./add 1 2 3 e 4 5
./add
```

### 100-change.c

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
./change
./change 10
./change 100
./change 101
./change 13
```

## Author

- Antony Aboud

---

