#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: pointer to int number
 * @index: index to set
 *
 * Return: 1 if worked -1 otherwise
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = 1 << index;

	*n |= bit;

	return (1);
}
