#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be used
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: - if no matching index  of the first element otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
}
