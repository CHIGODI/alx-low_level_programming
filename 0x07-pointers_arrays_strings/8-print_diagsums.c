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
	if (n == INT_MIN)
	{
	_putchar('-');
	print_number(INT_MAX / 10);
	_putchar(INT_MAX % 10 + 1 + '0');
	return;
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

/**
 * print_diagsums - Prints the sum of diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}

	print_number(sum_diag1);
	print_number(sum_diag2);
}
