#include "main.h"
/**
 * _strcpy - a function that copies the string pointed by src including the
 *           terminatorto the buffer pointed to by dest
 *
 * @dest: pointer to string
 * @src: pointer to string to be copied
 *
 * Return: dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[len] = '\0';
	return (dest);
}
