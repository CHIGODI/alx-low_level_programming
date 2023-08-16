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
	if (n <= 98)
	{
		int num;

		for (num = n; num <= 98; num++)
		{
			printf("%d", num);
		}
	}
	else if (num > 98)
	{
		for (num = n; n >= 98; num++)
		{
			printf("%d", num);
		}
	}
}
