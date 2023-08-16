#include "main.h"
/**
 * print_times_table - function that print the n times table with 0.
 * @n: number to be used
 *
 * Return: void.
 *
 */
void print_times_table(int n)
{
	int i, j, times, num;

	if (n > 15 || n < 0)
	{
		break;
	}
	else
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				times = i * j;
				if (j != 0)
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
		_putchar('0');
	}
	_putchar('\n');
}
