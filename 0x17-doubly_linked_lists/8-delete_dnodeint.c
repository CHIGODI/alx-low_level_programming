#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes node at index
 *                            of dlisint
 * @head: pointer to pointer of first node
 * @index: index of node to be deleted
 *
 * Return: 1 if suceeded -1 if failed
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = 0;
		free(temp);
		return (1);
	}

	while (temp != NULL && len < index)
	{
		temp = temp->next;
		len++;
	}
	if (temp == NULL)
		return (-1);

	temp->prev->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
