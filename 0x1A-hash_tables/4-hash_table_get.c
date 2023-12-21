#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: alue associated with the element, or NULL if key
 *         couldn’t be found
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr_node;
	unsigned int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	curr_node = ht->array[index];
	while (curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
			return (curr_node->value);

		curr_node = curr_node->next;
	}
	return (NULL);
}
