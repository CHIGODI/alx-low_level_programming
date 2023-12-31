#include "main.h"
/**
 * find_prime - helper function to find prime number
 * @n: number to check
 * @i: used to check if n is divisible
 *
 * Return: 1 is prime 0 otherwise
 */
int find_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0 && i >= 2)
	{
		return (0);
	}

	return (find_prime(n, i - 1));
}

/**
 * is_prime_number - function to check if number is prime
 * @n: number to be checked
 *
 * Return: 1 is prime 0 otherwise
 */
int is_prime_number(int n)
{
	int q = n / 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	return (find_prime(n, q));
}
