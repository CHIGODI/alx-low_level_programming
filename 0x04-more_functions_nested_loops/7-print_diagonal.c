#include "main.h"
/**
 *print_diagonal - function that draws line on the terminal
 * @n: is the number of times the character \ should be printed.
 *
 * Return: void
 *
 */
void print_diagonal(int n)
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
			_putchar('\\');
			i++;
		}
	}
	_putchar('\n');
}
