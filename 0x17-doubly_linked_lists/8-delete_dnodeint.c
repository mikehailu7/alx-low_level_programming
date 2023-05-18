#include "lists.h"
#include <stdlib.h>
/**
 * delete at index.
 * delete_dnodeint_at_index: function that will deletes a node at a particualr positions.
 * @index: Represents the index at which the node is deleted.
 * @head: points to at the top of double pointer.
 * Author: mikiasHailu.
 * Retun: this function will return 1 for success.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int m;
	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (m = 0; m < index; m++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
