#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash_table
 * @key: key of node
 * @value: value associated with key
 *
 * Return: 1 if successfull 0 otherwise
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *array_node = NULL;
	hash_node_t *curr = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[index];
	/** if key already exists in list update it value/overwrite its value**/
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			if (curr->value == NULL)
				return (0);
			return (1);
		}
		curr = curr->next;
	}
	array_node = malloc(sizeof(hash_node_t));
	if (array_node == NULL)
		return (0);

	array_node->key = strdup(key);
	if (array_node->key == NULL)
	{
		free(array_node);
		return (0);
	}
	array_node->value = strdup(value);
	if (array_node->value == NULL)
	{
		free(array_node->key);
		free(array_node);
		return (0);
	}
	array_node->next = ht->array[index];
	ht->array[index] = array_node;

	return (1);
}
