#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert at index.
 * insert_dnodeint_at_index: This function inserts a new node at a particular place.
 * @idx: index at which to insert the new node.
 * @h: double pointer to the beginning of the linked list.
 * @n: represents a data to enter into new node.
 * Author: mikiasHailu.
 * Return: Returns the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
        dlistint_t *next;
	unsigned int m;
	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (m = 0; m < idx - 1 && current != NULL; m++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
