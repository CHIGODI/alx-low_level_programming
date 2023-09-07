#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string is composed of digits.
 * @str: The string to check.
 *
 * Return: 1 if the string consists of digits, 0 otherwise.
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * print_number - Prints an unsigned long long integer.
 * @n: The number to print.
 */
void print_number(unsigned long long n)
{
    if (n >= 10)
        print_number(n / 10);
    putchar((n % 10) + '0');
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, 98 in case of errors.
 */
int main(int argc, char *argv[])
{
    char *num1, *num2;
    unsigned long long int result;

    if (argc != 3)
    {
        for (int i = 0; "Error\n"[i]; i++)
            putchar("Error\n"[i]);
        return (98);
    }

    num1 = argv[1];
    num2 = argv[2];

    if (!is_digit(num1) || !is_digit(num2))
    {
        for (int i = 0; "Error\n"[i]; i++)
            putchar("Error\n"[i]);
        return (98);
    }

    result = strtoull(num1, NULL, 10) * strtoull(num2, NULL, 10);
    print_number(result);
    putchar('\n');

    return (0);
}
