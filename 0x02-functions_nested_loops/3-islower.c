#include "main.h"
/**
 * _islower - A function that checks for lowercase characters.
 *
 */
int _islower(int c)
{
	int lower = 49, upper = 48;

	if (c >= 'a' && c <= 'z')
	{
		return lower;
	}
	else
	{
		return upper;
	}
}
