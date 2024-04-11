#include <stdio.h>
/**
 * interpolation_search - Searches for a value in a sorted array
 * using Interpolation search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the first occurrence of value in array, -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	pos = low + ((value - array[low]) * (high - low)) /
			(array[high] - array[low]);
	while ((array[low] <= value) && (value < array[high]))
	{
		pos = low + ((value - array[low]) * (high - low)) /
			(array[high] - array[low]);
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
