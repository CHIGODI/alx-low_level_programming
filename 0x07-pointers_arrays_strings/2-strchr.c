#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to string to be used
 * @c: character match to be found
 *
 * Return: NULL if not found. pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}
	return (ptr);
}
