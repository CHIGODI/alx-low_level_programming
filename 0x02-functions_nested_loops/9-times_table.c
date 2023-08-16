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
			times = i * j;
			_putchar((times / 10) + '0');
			_putchar((times % 10) + '0');
			if (times < 81)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
