#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - This is a function that print all the elements of the lsit
 * Autor: mikiashailu
 * @h: pointer tha points to the start of the linked list.
 * print_dlistint.
 * Return: This will return the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t m;
	for (m = 0; h != NULL; m++)
	{
		printf("%d\n", h->z);
		h = h->next;
	}
	return (m);
}
