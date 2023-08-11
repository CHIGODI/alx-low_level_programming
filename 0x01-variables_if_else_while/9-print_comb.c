#include <stdio.h>
/**
 * main - A program that prints the combination of all numbers in ascending
 *        order.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		int num = numbers;

		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
