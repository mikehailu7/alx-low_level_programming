#include "hash_tables.h"

/**
 * hash_table_delete: This function will deletes a hash table.
 * Author: MIkiashailu
 * Fun: delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int m = 0;
	hash_node_t *node;

	while (m < ht->size)
	{
		while (ht->array[m] != NULL)
		{
			node = ht->array[m]->next;
			free(ht->array[m]->key);
			free(ht->array[m]->value);
			free(ht->array[m]);
			ht->array[m] = node;
		}
		m++;
	}
	free(ht->array);
	free(ht);
}
