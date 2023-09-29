#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index to clear
 *
 * Return: 1 if worked -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = ~(1 << index);

	*n &= bit;

	return (1);
}
