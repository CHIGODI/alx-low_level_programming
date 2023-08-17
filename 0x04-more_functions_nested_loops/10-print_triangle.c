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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < (size - 1 - i))
			{
				_putchar(' ');
			}
			else if (j >= (size - 1 - i))
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
