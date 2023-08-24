#include "main.h"
/**
 * print_number - function that printsan integer
 * @n: integer to be used
 *
 * Return: void
 */

void print_number(int n)
{
	int reversed = 0;
	int original = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n != 0)
	{
		reversed = reversed * 10 + n % 10;
		n = n / 10;
	}

	while (reversed != 0)
	{
		_putchar(reversed % 10 + '0');
		reversed = reversed / 10;
	}

	if (original == 0)
	{
		_putchar('0');
	}
}
