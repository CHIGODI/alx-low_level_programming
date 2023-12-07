#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth node of a dlistint
 * @head: pointer to first node
 * @index: index of the node
 *
 * Return: Nod otherwise returns Null if node doest exist
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
			return (temp);

		i++;
		temp = temp->next;
	}
	return (NULL);
}
