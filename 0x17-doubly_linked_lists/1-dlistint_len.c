#include "lists.h"
/**
 * dlistint_len - returns length of dlistint_t
 * @h: pointer to first node
 *
 * Return: length of list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
