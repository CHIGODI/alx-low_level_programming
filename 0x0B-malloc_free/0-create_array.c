#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 *                and initializes it with a specific char.
 * @c: character initiliazedto array
 * @size: the size
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[size] = '\0';

	return (ptr);
}
