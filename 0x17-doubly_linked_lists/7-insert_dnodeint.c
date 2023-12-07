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
	dlistint_t *new_node, *temp, *prev;
	unsigned int index_check = 0, len = 0;

	if (*h == NULL && idx > 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	len = dlistint_len(*h);
	new_node->n = n;
	if (idx > len)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (index_check == idx)
		{
			new_node->next = temp;
			new_node->prev = prev;
			prev->next = new_node;
			return (new_node);
		}
		prev = temp;
		temp = temp->next;
		index_check++;
	}
	return (NULL);
}
