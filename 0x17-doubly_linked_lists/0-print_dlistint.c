#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a dlistint_t
 * @h: pointer to first node
 *
 * Return: number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
