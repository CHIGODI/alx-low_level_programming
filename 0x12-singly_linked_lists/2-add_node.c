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
	int len;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;

	newNode->str = strdup(str);
	if (newNode->str ==NULL)
		return (NULL);
	
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
