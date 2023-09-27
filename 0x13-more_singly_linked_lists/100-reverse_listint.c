#include "lists.h"
/**
 *reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to pointer to first node
 *
 *Return: a pointer to the first node of the reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
        listint_t *prevnode;
        listint_t *currentnode;
        listint_t *nextnode;

        currentnode = *head;
        prevnode = NULL;

        while (currentnode != NULL)
        {
                nextnode = currentnode->next;
                currentnode->next = prevnode;
                prevnode = currentnode;
                currentnode = nextnode;
        }
        *head = prevnode;
        return prevnode;
}
