#include "lists.h"
/**
 * sum_dlistint - finds sum of all the data of a dlistint
 * @head: pointer to first node
 *
 * Return: Sum or 0 if list empty
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
