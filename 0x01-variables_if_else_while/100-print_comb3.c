#include <stdio.h>
/**
 * main - A program to print unique combinations of numbers using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second;

	for (first = 0; first <= 8; first++)
	{
		for (second = first + 1; second <= 9; second++)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (first < 8 || second < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
