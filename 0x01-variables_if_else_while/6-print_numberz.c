#include <stdio.h>
/**
 * main - a program that prints all single digits of base 10 starting from 0.
 *        -using putchar and char type.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}
	return (0);
}
