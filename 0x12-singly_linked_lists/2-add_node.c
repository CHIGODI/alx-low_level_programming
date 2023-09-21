#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node- adding new node at beginning of a list_t
 * @head: pointer to head node
 * @str: string to beduplicated
 *
 * Return: address of the new element of NULL i failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	char *dup;

	if (newNode == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		newNode->str = dup;
		newNode->len = strlen(dup);
		newNode->next = *head;
		
		*head = newNode;
	}

	return (newNode);
}
