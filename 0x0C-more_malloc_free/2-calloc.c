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
	unsigned int *memory = calloc(nmemb * size);
	unsigned int i;

	if (memory == NULL)
		return (NULL);

	return (memory);
}
