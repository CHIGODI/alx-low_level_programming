#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n)
 * @head: pointer to pointer
 *
 * Return: returns the head node’s data (n). if list is empty return  0
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);

	temp = *head;
	(*head) = (*head)->next;
	value = temp->n;
	free(temp);

	return (value);
}
