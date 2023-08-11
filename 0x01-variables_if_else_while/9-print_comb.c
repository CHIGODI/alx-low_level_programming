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
		putchar(numbers + '0');
		putchar('0');
	}
	return (0);
}
