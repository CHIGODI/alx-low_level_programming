#include "main.h"
/**
 * flip_bits -  a function that returns the number of bits you would
 *  need to flip to get from one number to another.
 * @n:first number
 * @m: second number
 *
 * Return: number of bits you would need to flip to get from one number
 * to another.
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check = n ^ m;
	unsigned int count = 0;

	while (check != 0)
	{
		count += check & 1;
		check >>= 1;
	}
	return (count);
}
