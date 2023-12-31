#include "main.h"
/**
 * _pow_recursion - a function that returns the value x raised to power y
 * @x: number to be used
 * @y: power to be used
 *
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
