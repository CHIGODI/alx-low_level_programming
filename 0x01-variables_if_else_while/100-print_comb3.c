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

	for (numbers = 0; numbers <= 89; numbers++)
	{
		int first = numbers / 10;
		int last = numbers % 10;

		if (numbers != 0)
		{
			putchar(first + '0');
		}
		putchar(last + '0');
		if (numbers < 89 && numbers > 00)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
