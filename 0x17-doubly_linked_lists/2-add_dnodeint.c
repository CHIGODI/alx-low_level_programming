#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: pointer to pointer to first node
 * @n: data to be added as first node
 *
 * Return: address of the new node
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}
