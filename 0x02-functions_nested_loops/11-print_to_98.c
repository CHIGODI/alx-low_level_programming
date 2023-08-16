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
    int abs_num, divisor; // Declare variables at the beginning

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i < 0)
            {
                _putchar('-');
                abs_num = -i;
                divisor = 1;
                while (abs_num / divisor > 9)
                    divisor *= 10;
                while (divisor > 0)
                {
                    _putchar((abs_num / divisor) + '0');
                    abs_num %= divisor;
                    divisor /= 10;
                }
            }
            else
            {
                divisor = 1;
                while (i / divisor > 9)
                    divisor *= 10;
                while (divisor > 0)
                {
                    _putchar((i / divisor) + '0');
                    i %= divisor;
                    divisor /= 10;
                }
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
            divisor = 1;
            while (i / divisor > 9)
                divisor *= 10;
            while (divisor > 0)
            {
                _putchar((i / divisor) + '0');
                i %= divisor;
                divisor /= 10;
            }
            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    _putchar('\n');
}
