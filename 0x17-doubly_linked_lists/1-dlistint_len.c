#include "lists.h"
/**
 * listlength.
 * dlistint_len: count the number of nodes in the linked list.
 * @h:This pointer  points to the start of the linked list.
 * Autor: MikiasHailu.
 * @k: in avariable.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t k;
	for (k = 0; h != NULL; k++)
		h = h->next;
	return (k);
}
