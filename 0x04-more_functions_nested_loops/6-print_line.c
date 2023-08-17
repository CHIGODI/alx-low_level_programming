#include "main.h"
/**
 * print_line - function that draws a straight line inthe terminal.
 * @n: number of times the character _ is printed.
 *
 * Return: void
 *
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
		_putchar('_');
		i++;
		}
	}
	_putchar('\n');
}
