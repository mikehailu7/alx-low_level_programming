#include "hash_tables.h"

/**
 * hash_table_delete: This funciton will remove the hash table.
 * @ht: THis one is the table to be deleted.
 * Author: MIkiasHailu
 * Fun: delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *aux_free;
	unsigned long int m = 0;

	if (!ht)
		return;

	for (m = 0; m < ht->size; m++)
	{
		bucket = ht->array[m];
		while (bucket)
		{
			aux_free = bucket;
			bucket = bucket->next;
			if (aux_free->key)
				free(aux_free->key);
			if (aux_free->value)
				free(aux_free->value);
			free(aux_free);
		}
	}
	free(ht->array);
	free(ht);
}
