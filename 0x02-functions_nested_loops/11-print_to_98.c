#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Function that prints all natural numbers from n to 98.
 * @n: number that will start.
 *
 * Return: void (no need for a return value).
 */
void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			printf("%d", num);
			if (num < 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			printf("%d", num);
			if (num > 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
