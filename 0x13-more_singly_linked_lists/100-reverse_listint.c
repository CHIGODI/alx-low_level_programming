#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to pointer to the first node
 *
 * Return: a pointer to the first node of the reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *temp;

	if (*head == NULL) 
		return (NULL);

	while ((*head)->next != NULL) 
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}

	(*head)->next = prev;

	return (*head);
}
