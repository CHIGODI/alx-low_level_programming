#include "main.h"
/**
 * _islower - A function that checks for lowercase characters.
 *  @c: the character to be checked.
 *
 * Return: 1 is lower 0 otherwise.
 *
 */
int _islower(int c)
{
	int lower = 1, upper = 0;

	if (c >= 'a' && c <= 'z')
	{
		return (lower);
	}
	else
	{
		return (upper);
	}
}
