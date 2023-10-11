#include <stdlib.h>
#include "search_algos.h"
/**
 * free_skiplist: This function will deallocates a singly linked list
 * Author: Mikias Hailu
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
