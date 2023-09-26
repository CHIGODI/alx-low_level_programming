#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given index in a linkedlist
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be stored in the new node.
 * Return: Address of the new node on success, NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temphead, *prevnode;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temphead = *head;
	prevnode = NULL;

	while (temphead != NULL)
	{
		if (count == idx)
		{
			prevnode->next = newnode;
			newnode->next = temphead;
			return (newnode);
		}
		prevnode = temphead;
		temphead = temphead->next;
		count++;
	}

	if (count == idx)
	{
		prevnode->next = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	return (NULL);
}
