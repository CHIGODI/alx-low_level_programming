#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to string to be used
 * @c: character match to be found
 *
 * Return: NULL if not found. pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	if (c == '\0')
	{
		return (&s[len]);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
