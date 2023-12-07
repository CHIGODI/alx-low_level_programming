#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlist
 * @head: pointer to pointer to first node
 * @n: data to be inseted to the new node
 *
 * Return: address of the new node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node_end;
	dlistint_t *temp = NULL;

	new_node_end = malloc(sizeof(dlistint_t));
	if (new_node_end == NULL)
		return (NULL);

	if (head == NULL || *head == NULL)
	{
		new_node_end->n = n;
		new_node_end->next = *head;
		new_node_end->prev = NULL;
		*head = new_node_end;
		return (new_node_end);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node_end;
	new_node_end->n = n;
	new_node_end->next = NULL;
	new_node_end->prev = temp;

	return (new_node_end);
}
