#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string pointer.
 * @src: source string pointer.
 *
 * Return: dest(pointer to the resulting string dest)
 *
 */
char *_strcat(char *dest, char *src)
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
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
