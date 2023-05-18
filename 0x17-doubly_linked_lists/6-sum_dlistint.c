#include "lists.h"
/**
 * sumlist
 * sum_dlistint: This function will return sums all of the data of a list
 * @head: This pointer will point to the beginning of the list.
 * Author: mikiashailu.
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}
