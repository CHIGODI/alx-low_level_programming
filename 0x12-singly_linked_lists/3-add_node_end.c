#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adding a new node at the end of a list_t list
 * @head: pointer to a pointer to the first node
 * @str: string to add to the end node
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	if (newNode->str == NULL)
		return (NULL);

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
