#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

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
	int len1 = _strlen(dest), len2 = _strlen(src), i;

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
	dest[len1 + len2] = '\0';
	return (dest);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: destination string
 * @s2: Source string
 * @n: number of characters to be concatenated
 *
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat = NULL;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	concat = malloc(len1 + n);

	if (concat == NULL)
	{
		return (NULL);
	}

	_strcpy(concat, s1);
	_strncat(concat, s2, n);

	return (concat);
}
