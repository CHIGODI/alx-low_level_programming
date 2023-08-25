#include "main.h"
#include <limits.h>
/**
 * print_number - a function that prints an integer
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == INT_MIN)
	{
		n = INT_MAX;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
