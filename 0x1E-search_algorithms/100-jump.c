#include <stdio.h>
#include <math.h>
/**
 * jump_search - jump search algorithim
 * @array: array to search
 * @size: number of elements in array
 * @value: value we are looking for
 *
 * Return:  index where value is located or -1 otherwise
 *
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, left, right, i;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	left = 0;
	right = jump;

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", left,
		       array[left]);
		printf("Value checked array[%lu] = [%d]\n", right,
		       array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (i = left; i <= (right < size ? right : size - 1); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
