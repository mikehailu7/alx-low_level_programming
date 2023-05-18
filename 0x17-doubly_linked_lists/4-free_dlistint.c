#include "lists.h"
#include <stdlib.h>
/**
 * freelist
 * free_dlistint: this fucntion will free a list
 * @head: This pointer will point to the head
 * Autor: MikiasHailu
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nxt;
	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
