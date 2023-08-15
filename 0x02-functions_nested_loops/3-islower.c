#include "main.h"
/**
 * _islower - A function that checks for lowercase characters.
 *
 */
int _islower(int c)
{
	int lower = 48, upper = 49;

	if (c >= 'a' && c <= 'z')
	{
		_putchar(lower);
	}
	else
	{
		_putchar(upper);
	}
	return (0);
}
