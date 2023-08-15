#include "main.h"

/**
 * print_to_98 - Function that prints all natural numbers from n to 98.
 * @n: number that will start.
 *
 * Return: void (no need for a return value).
 */
void print_to_98(int n)
{
        int i, j;

        if (n < 98)
        {
            for (i = n; i <= 98; i++)
            {
                i = -i;
                _putchar('-');
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
                if (i != 98)
                {
                    _putchar(',');
                    _putchar(' ');
                }
            }
        }
        else
        {
            for (j = n; j >= 98; j--)
            {
                _putchar((j / 10) + '0');
                _putchar((j % 10) + '0');
                if (j != 98)
                {
                    _putchar(',');
                    _putchar(' ');
                }
            }
        }
        _putchar('\n');
        }
