#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table
 *
 * Return: Nothing!
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr_node;
	unsigned int i, printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr_node = ht->array[i];
		while (curr_node != NULL)
		{
			if (printed == 1)
				printf(", ");
			printf("'%s: %s'", curr_node->key, curr_node->value);
			printed = 1;
			curr_node = curr_node->next;
		}
	}
	printf("}\n");
}
