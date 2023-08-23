#include "main.h"
/**
 * _strncat- a function that concatenates two strings.
 *           it will use at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: bytes to be concatenated from src
 *
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		len2++;
	}
	if (n <= len2)
	{
		for (i = 0; i < n; i++)
		{
			dest[len1 + i] = src[i];
		}
	}
	else if (n > len2)
	{
		for (i = 0; i < len2; i++)
		{
			dest[len1 + i] = src[i];
		}
	}
	return (dest);
}
