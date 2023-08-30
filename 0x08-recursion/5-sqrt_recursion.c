#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - a function that returns the natural squareroot of a number
 * @n: number to be used
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
  int check = sqrt(n);

	if (n < 0)
	{
		return (-1);
	}

	if (check * check == n)
	{
		return (check);
	}
	else
	{
		return (-1);
	}
}
