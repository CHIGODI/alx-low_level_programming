#include "main.h"
/**
 * _strlen -a function that returns length of a string
 * @s: string to be used
 *
 * Return: length of string.
 *
 */
int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
