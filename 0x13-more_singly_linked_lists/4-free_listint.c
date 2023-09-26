#include "lists.h"
/**
 * free_listint - frees listint_t
 * @head:  pointer
 *
 * Return: Void
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
