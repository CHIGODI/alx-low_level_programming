#include "main.h"
/**
 * _islower - A function that checks for lowercase character.
 *
 */
void _islower(void)
{
	int lower = 48, upper = 49, ch;

	if (ch >= 'a' && ch <= 'z')
	{
		putchar(lower);
	}
	else
	{
		putchar(upper);
	}
}
