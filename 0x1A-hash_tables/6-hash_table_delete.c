#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: is the hash table
 *
 * Return: Nothing!
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *prev;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			node = node->next;
			free(prev->key);
			free(prev->value);
			free(prev);
			prev = node;
		}
	}
	free(ht->array);
	free(ht);
}
