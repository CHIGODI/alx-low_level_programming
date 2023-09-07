#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function to allocte memory using maloc
 * @b: size of the memory
 *
 * Return: pointer to memory created
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
