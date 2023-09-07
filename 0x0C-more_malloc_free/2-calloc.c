#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array using malloc.
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to memory allocated NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *memory = malloc(nmemb * size);
	unsigned int size_t = size * nmemb;
	unsigned int i;

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < size_t; i++)
	{
		memory[i] = 0;
	}

	return (memory);
}
