#include "main.h"
/**
 * _islower - A function that checks for lowercase characters.
 *
 * parameter c - paramter c is the character.
 *
 * Return: 1 is lower 0 therwise.
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
