#include "main.h"
/**
 * print_to_98 - Function that prints all natural numbers from n to 98.
 * @n: number that will start.
 *
 * Return: 0 success.
 *
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
		}
	}
		else
		{
			for (j = n; j >= 98; j--)
			{
				_putchar(j + '0');
			}
		}
	}
	return (0);
}
