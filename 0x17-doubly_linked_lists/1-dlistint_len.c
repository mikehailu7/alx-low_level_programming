#include "lists.h"

/**
 * dlistint_len.c
 * dlistint_len - count the number of nodes in the linked list
 * @h:This pointer  points to the start of the linked list
 * Autor: MikiasHailu
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t m;
	for (m = 0; h != NULL; m++)
		h = h->next;
	return (m);
