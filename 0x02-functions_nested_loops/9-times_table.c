#include "main.h"
/**
 * times_table - function that prints 9 times table starting with o.
 *
 */
void times_table(void)
{
	int i, j, times;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int times = i * j;
			int first = times / 10 + '0';
			int last = times % 10 + '0';
			if ( first != last)
			{
				_putchar(first);
				_putchar(last);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
