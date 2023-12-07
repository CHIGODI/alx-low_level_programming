#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - returns length of dlistint_t
 * @h: pointer to first node
 *
 * Return: length of list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

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
	dlistint_t *new_node, *temp;
	unsigned int i = 0;
	size_t len = dlistint_len(*h);

	if (idx > len)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0 || *h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	temp = *h;

	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
