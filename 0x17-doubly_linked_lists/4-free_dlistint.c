#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head!= NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		if (head != NULL)
			head->prev = NULL;
	}
}
