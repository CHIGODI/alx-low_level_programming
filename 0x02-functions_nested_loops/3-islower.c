#include "main.h"
/**
 * _islower - A function that checks for lowercase character.
 *
 */
void _islower(ch)
{
	int lower = 48, upper = 49;

	if (ch >= 'a' && ch <= 'z')
	{
		_putchar(lower);
	}
	else
	{
		_putchar(upper);
	}
}
