#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a listint_t linked list
 * @head: pointer to pointer
 * @index: index
 *
 * Return: 1 if successfull -1 otherwise.
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temphead, *prevnode;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temphead = *head;
		*head = temphead->next;
		free(temphead);
		return (1);
	}

	temphead = *head;
	prevnode = NULL;

	while (temphead != NULL)
	{
		if (count == index)
		{
			prevnode->next = temphead->next;
			free(temphead);
			return (1);
		}
		prevnode = temphead;
		temphead = temphead->next;
		count++;
	}

	return (-1);
}
