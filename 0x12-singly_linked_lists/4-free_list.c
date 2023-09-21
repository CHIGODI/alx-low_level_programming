#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees list_t list
 * @head: pointer to first node
 *
 * Return: void
 *
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(head->str);
		free(current);
		current  = next;
	}
}
