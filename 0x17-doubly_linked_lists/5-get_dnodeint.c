#include "lists.h"
/**
 * Get node at index.
 * get_dnodeint_at_index: This function will find a particular node.
 * @head: This pointer points to the beginning of the linked list.
 * @index: index of the node to retrieve
 * Autor: mikiasHailu
 * Return: this will return pointer to the indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m;
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (m = 0; m < index; m++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
