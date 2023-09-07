#include <stdlib.h>

/**
 * _memcpy - A function that copies memory data
 * @dest: Destination to copy to
 * @src: Source string
 * @n: Size
 *
 * Return: dest
 */
void *_memcpy(void *dest, const void *src, unsigned int n)
{
    char *s = (char *)src;
    char *d = (char *)dest;
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        d[i] = s[i];
    }

    return dest;
}

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with a call to malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: A pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }
    else if (ptr == NULL)
    {
        return malloc(new_size);
    }
    else if (new_size == old_size)
    {
        return ptr;
    }
    else if (new_size < old_size)
    {
        void *new_ptr = malloc(new_size);
        if (new_ptr == NULL)
        {
            return NULL;
        }
        _memcpy(new_ptr, ptr, new_size);
        free(ptr);
        return new_ptr;
    }
    else
    {
        void *new_ptr = malloc(new_size);
        if (new_ptr == NULL)
        {
            return NULL;
        }
        _memcpy(new_ptr, ptr, old_size);
        free(ptr);
        return new_ptr;
    }
}
