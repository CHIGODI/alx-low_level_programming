#include "main.h"
/**
 * _sqrt - helper function to find sqrt
 * @n: number
 * @i: first guess
 *
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural squareroot of a number
 * @n: number to be used
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 1));
}
