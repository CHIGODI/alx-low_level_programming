#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - a function that copies memory data
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
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr:is a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size:is the new size, in bytes of the new memory block
 *
 * Return: pointer to reallocate memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_pointer = NULL;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_pointer = malloc(new_size);
		if (new_pointer == NULL)
		{
			return (NULL);
		}
		return (new_pointer);
	}
	if (new_size <= old_size)
	{
		new_pointer = malloc(new_size);
		if (new_pointer == NULL)
		{
			return (NULL);
		}
		_memcpy(new_pointer, ptr, new_size);
		free(ptr);
	}
	else
	{
		new_pointer = malloc(new_size);
		if (new_pointer == NULL)
		{
			return (NULL);
		}
		_memcpy(new_pointer, ptr, old_size);
		free(ptr);
	}

	return (new_pointer);
}
