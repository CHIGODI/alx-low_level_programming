#include <stdio.h>
/**
 * binary_search - searches for a value in a sorted array
 *                of integers using the Binary search algorithm
 * @array: array to be searched
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: -1 if not found index if found
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle = size, i = 0;


	while (left <= right)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
		i++;
	}
	return (-1);
}
