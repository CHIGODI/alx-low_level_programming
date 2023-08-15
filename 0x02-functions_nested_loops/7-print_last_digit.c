#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number.
 * @n: number whose last digit is printed.
 *
 * Return: 0 success.
 *
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit + '0');
	return (0);
}
