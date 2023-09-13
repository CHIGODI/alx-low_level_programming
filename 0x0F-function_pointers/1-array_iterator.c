#include "function_pointers.h"
/**
 * array_iterator - executes a function as a parameter on each element of an
 *                  array
 * @array: array to be used
 * @size: size of array
 * @action: pointer to the function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
