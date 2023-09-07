#include "main.h"
#include <stdlib.h>
/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to string
 * @b: a constant to be filled
 * @n: size
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
/**
 * _calloc - a function that allocates memory for an array using malloc.
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to memory allocated NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int size_t = 0;
	char *memory = NULL;
	
	if (nmemb == 0 || size ==0)
	{
		return (NULL);
	}
	size_t = nmemb * size;
	memory = malloc(size_t);
	if (memory == NULL)
	{
		return (NULL);
	}
	_memset(memory, 0, size_t);
	return (memory);
}
