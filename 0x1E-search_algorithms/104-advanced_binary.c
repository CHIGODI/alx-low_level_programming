#include <stdio.h>

/**
 * advanced_binary_recursive - Recursive helper function for advanced binary
 *                             search
 * @array: Pointer to the first element of the array
 * @left: Left index of the subarray
 * @right: Right index of the subarray
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value in array, -1 if not found
 */
int advanced_binary_recursive(int *array, int left, int right, int value)
{
	int mid, i;

	if (left > right)
		return (-1);

	mid = (left + right) / 2;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");

	if (array[mid] == value)
        {
                if (mid == left || array[mid - 1] != value)
                        return (mid);
                else
                        return (advanced_binary_recursive(array, left, mid,
                                                          value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, right,
						  value));
	else
		return (advanced_binary_recursive(array, left, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value in array, -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
