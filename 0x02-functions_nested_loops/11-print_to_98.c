#include "main.h"

/**
 * print_to_98 - Function that prints all natural numbers from n to 98.
 * @n: number that will start.
 *
 * Return: void (no need for a return value).
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i < 0)
            {
                int abs_i = -i; // Store the absolute value for printing
                _putchar('-');
                _putchar((abs_i / 10) + '0');
                _putchar((abs_i % 10) + '0');
            }
            else
            {
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
            }

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            _putchar((i / 10) + '0');
            _putchar((i % 10) + '0');

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    _putchar('\n');
}
