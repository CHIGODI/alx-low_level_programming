#include "main.h"
/**
 * print_number - function that prints integer
 * @n: integer to be printed
 *
 * Return: void
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		int d = '-';

		putchar(d);
		n = -n;

		int reversed = 0;

		while (n > 0)
		{
			int digit = n % 10;

			reversed = reversed * 10 + digit;
			n /= 10;
		}
		while (reversed > 0)
		{
			int digit = reversed % 10;

			putchar(digit + '0');
			reversed /= 10;
		}
	}
	else
	{
		putchar(n + '0');
	}
}
