#include "main.h"
/**
 * get_endianness - get s endianness
 *
 * Return: 0 if big indiannes 1 otherwise
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *byte = (char *)&test;

	return ((int)(*byte));
}
