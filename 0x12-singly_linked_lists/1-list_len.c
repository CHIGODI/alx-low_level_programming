#include "lists.h"
/**
 * list_len - returning number of elements in a linked list list_t
 * @h: pointer to node
 *
 * Return: number of elemets in linked list
 *
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
