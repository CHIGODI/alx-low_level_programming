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
	list_t *newNode;
	char *dup;
	int i;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i];)
		i++;

	newNode->str = dup;
	newNode->len = i;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
