#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: key to be hashed
 * @size: size of array
 *
 * Return: index
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;

	index = (hash_djb2(key)) % size;

	return (index);
}
