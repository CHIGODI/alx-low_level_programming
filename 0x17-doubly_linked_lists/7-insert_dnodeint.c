#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a
 *                            given position
 * @h: pointer to pointer of first node
 * @idx: index at which to insert new node
 * @n: data for the new node
 *
 * Return: address of new node NULL if failed
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp, *prev;
	unsigned int index_check = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *h;

	if (*h == NULL)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		if (index_check == idx)
		{
			new_node->next = temp;
			new_node->prev = prev;
			prev->next = new_node;
			return (new_node);
		}
		index_check++;
		prev = temp;
		temp = temp->next;
	}
	return (NULL);
}
