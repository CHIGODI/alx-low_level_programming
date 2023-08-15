#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @n: number to be used.
 *
 *Return: 0 success
 *
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	else if (n == 0)
	{
		n = 0;
	}
	return (n);
}
