#include "lists.h"
/**
 * add_nodeint_end - adds at  the end of a linked list
 * @head: head node
 * @n: data to add to thenew node
 *
 * Return: address of new node NULL if failed.
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;

	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		(*head) = new;
		new->n = n;
		new->next = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->n = n;
		new->next = NULL;
		temp->next = new;
	}
	return (new);
}
