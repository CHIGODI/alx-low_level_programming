#include "main.h"
/**
 * _memcpy - a fuction that copies memory data
 * @dest: destination to copy to
 * @src: source string
 * @n: size
 *
 *  Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
			i++;
	}
	return (dest);
}
