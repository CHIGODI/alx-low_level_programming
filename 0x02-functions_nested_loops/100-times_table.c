#include "main.h"
/**
 * times_table - function that prints 9 times table starting with 0.
 * @n: number to print table.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if(n < 15 && n > 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				int times = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (times < n + 1)
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
}
