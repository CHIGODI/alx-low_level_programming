#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - a function that copies memory data
 * @dest: destination to copy to
 * @src: source string
 * @n: size
 *
 * Return: dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	char *s = (char *)src;
	char *d = (char *)dest;

	for (size_t i = 0; i < n; i++)
	{
		d[i] = s[i];
	}

	return (dest);
}
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void *new_pointer;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_pointer = malloc(new_size);

	if (new_pointer == NULL)
	{
		return (NULL);
	}

	if (new_size <= old_size)
	{
		_memcpy(new_pointer, ptr, new_size);
	}
	else
	{
		_memcpy(new_pointer, ptr, old_size);
	}

	free(ptr);
	if (new_pointer == NULL)
		return (NULL);
	return (new_pointer);
}
