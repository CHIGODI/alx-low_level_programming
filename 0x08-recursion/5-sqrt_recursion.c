#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural squareroot of a number
 * @n: number to be used
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	for (; i * i < n; i++);

	if (n < 0)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}
