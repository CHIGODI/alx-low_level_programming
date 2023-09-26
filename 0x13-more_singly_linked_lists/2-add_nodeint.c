#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning
 * @head: head node
 *@n: data to add yo new node
 *
 * Return: address of new element
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
