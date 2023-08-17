#include "main.h"
/**
 * print_numbers - function that prints numbers from 0 to 9
 *                  followed by new line(using only _putchar).
 *
 * Return: void
 *
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
