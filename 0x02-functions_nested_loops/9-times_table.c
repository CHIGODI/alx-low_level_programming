#include "main.h"

/**
 * times_table - function that prints 9 times table starting with 0.
 */
void times_table(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            int times = i * j;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');

                if (times < 10)
                    _putchar(' ');
                else
                    _putchar(times / 10 + '0');

                _putchar(times % 10 + '0');
            }
            else
            {
                _putchar('0');
            }
        }
        _putchar('\n');
    }
}
