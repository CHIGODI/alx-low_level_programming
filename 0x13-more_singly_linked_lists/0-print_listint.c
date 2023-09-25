#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a listint_t
 * @h: head node of listint_t
 *
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h  = h->next;
	}
	return (count);
}
