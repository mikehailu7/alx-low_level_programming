#include "lists.h"
/**
 * Add node at the end
 * add_dnodeint_end: is a function that will insert node at the end with is a new node.
 * Author: mikiashailu.
 * @n: Represents the value of the node.
 * @head: Represets the top of the list.
 * Return: This will return the added node if it is correct.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
