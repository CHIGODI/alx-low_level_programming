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

	if (head == NULL ||*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
