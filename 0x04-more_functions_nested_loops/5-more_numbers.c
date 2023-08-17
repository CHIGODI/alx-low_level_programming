#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers from 0 to 14
 *              followed by new line.
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int times, num;

	for (times = 0; times <= 10; times++)
	{
		for (num = '0'; num <= '14'; num++)
		{
			int tens = j / 10 + '0';
			int ones = j % 10 + '0';

			if (tens != '0')
			{
				_putchar(tens);
			}
			_putchar(num);
		}
	}
	_putchar('\n');
}
