#include <stdio.h>
/**
 * main - A program that prints teh combination of all numbers in acsending
 *        order.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 99; numbers++)
	{
		int first = (numbers /  10) + '0';
		int last = (numbers % 10) + '0';

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
	return (0);
}
