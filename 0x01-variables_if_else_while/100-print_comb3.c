#include <stdio.h>
/**
 * main - A program to print combination of numbers using putchar.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 99; numbers++)
	{
		int first = numbers / 10;
		int last = numbers % 10;

		if (first != 0)
		{
			putchar(first + '0');
		}
		putchar(last + '0');
		if (numbers < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
