#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: start
 * @max: end
 *
 * Return: pointer to new array NULL if failed
 */
int *array_range(int min, int max)
{
	int i;
	int *array_mem = NULL;
	int count = 0;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		count = max - min + 1;
		array_mem = malloc(count * sizeof(int));
		if (array_mem == NULL)
		{
		return (NULL);
		}
		for (i = min; i <= max; i++)
		{
			array_mem[i] = i;
		}
		return (array_mem);
	}
}
