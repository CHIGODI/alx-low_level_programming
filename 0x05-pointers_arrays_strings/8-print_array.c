#include "main.h"
#include<stdio.h>
/**
 * print_array - a function that prints n elements of an array followed by new
 *              line.
 * @a: array
 * @n: number of elements to be printed
 *
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
