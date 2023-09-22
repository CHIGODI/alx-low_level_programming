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
	int len;
	list_t *newNode;
	char *dup;
	list_t *temp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newNode->str = dup;
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
