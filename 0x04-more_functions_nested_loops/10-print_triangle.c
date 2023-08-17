#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: is the size of the triangle
 *
 * Return: void
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < (n - 1 - i))
				{
					_putchar(' ');
				}
				else if (j >= (n - 1 - i))
				{
					_putchar('#');
				}
			}
		}
	}
	_putchar('\n');
}
