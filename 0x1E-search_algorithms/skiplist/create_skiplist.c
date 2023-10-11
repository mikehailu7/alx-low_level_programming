#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

void free_skiplist(skiplist_t *list);
/**
 * init_express: This funciton will initializes the express lane of the linked list
 * Author: Mikias Hailu
 */
void init_express(skiplist_t *list, size_t size)
{
	const size_t step = sqrt(size);
	size_t m;
	skiplist_t *save;

	for (save = list, m = 0; m < size; ++m, list = list->next)
	{
		if (m % step == 0)
		{
			save->express = list;
			save = list;
		}
	}
}

/**
 * create_skiplist: This function will create a single linked list
 * Author: Mikias Hailu
 * Return: This will return a pointer to the head of the created list (NULL on failure)
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *list;
	skiplist_t *node;
	size_t save_size;
	list = NULL;
	save_size = size;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_skiplist(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->express = NULL;
		node->next = list;
		list = node;
	}
	init_express(list, save_size);
	return (list);
}
