#include "main.h"
/**
 * print_sign - Function that prints the sign of a number.
 * @n: number to be checked.
 *
 * Return: 1 positive 0 zero -1 less that zero.
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('48');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
