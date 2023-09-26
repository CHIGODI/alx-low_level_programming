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
	listint_t *current;
	listint_t *next;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
