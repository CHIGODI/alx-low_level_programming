#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list.
 * @head: pointer to node
 * @index: returning node at this index
 *
 * Return: node at given index
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
