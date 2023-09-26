#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer
 *
 * Return: Void
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *previous;
	listint_t *next;

	if (head == NULL)
		return;

	previous = *head;
	while (previous != NULL)
	{
		next = previous->next;
		free(previous);
		previous = next;
	}

	*head = NULL;
}
