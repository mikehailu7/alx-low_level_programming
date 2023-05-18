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
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
