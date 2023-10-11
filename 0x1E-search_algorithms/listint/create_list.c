#include <stdlib.h>
#include "search_algos.h"
void free_list(listint_t *list);
/**
 * create_list: This funciton will Creates a single linked list
 * @array: This is a pointer that pointes to the array to use to fill the list
 * Author: Mikias Hailu
 * Return: This will return a pointer to the head of the created list (NULL on failure)
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *list;
	listint_t *node;

	list = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = list;
		list = node;
	}
	return (list);
}
