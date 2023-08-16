#include "main.h"
/**
 * times_table - function that prints 9 times table starting with o.
 *
 */
void times_table(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            int times = i * j;
            int first = times / 10;
            int last = times % 10;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (times < 10)
            {
                _putchar(' ');
            }
            else
            {
                _putchar(first + '0');
            }

            _putchar(last + '0');
        }
        _putchar('\n');
    }
}

