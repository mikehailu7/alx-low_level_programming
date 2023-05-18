#include "lists.h"
#include <stdlib.h>

/**
 * add node at the end.
 * add_dnodeint: This will add a new node at the start of the list.
 * @n: this is the node
 * @head: double pointer to the beginning of the linked list
 * Author: mikiashailu
 * Return: This will return n if it is right.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));
	 if (h != NULL)
        {
                while (h->prev != NULL)
                        h = h->prev;
        }
        new->next = h;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	h = *head;
	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}
