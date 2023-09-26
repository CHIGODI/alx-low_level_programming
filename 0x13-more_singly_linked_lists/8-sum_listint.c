#include "lists.h"
/**
 * sum_listint - finding sum of data in listint_t
 * @head: pointer to first node
 *
 * Return: sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}

	return (sum);
}
