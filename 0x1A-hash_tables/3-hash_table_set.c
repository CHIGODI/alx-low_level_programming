#incluse "has_tables.h"

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
	unsigned int index;
	hash_node_t *array_node = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, size);

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
		free(array_node);
		return (0);
	}
	array_node->next = ht->array[index];
	ht->array[index] = array_node;

	return (1);
}
