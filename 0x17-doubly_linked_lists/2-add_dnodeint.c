#include "lists.h"
#include <stdlib.h>

/**
 * add node at the end.
 * add_dnodeint: This will add a new node at the start of the list.
 * @p: this is the node
 * @head: double pointer to the beginning of the linked list
 * Author: mikiashailu
 * Return: This will return p if it is right.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int p)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->p = p;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
