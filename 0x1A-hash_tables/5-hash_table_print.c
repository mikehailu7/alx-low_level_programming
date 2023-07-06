#include "hash_tables.h"

/**
 * hash_table_print: This function wil display a hash table.
 * @ht: hash table to print
 * Author: MikiasHailu
 * Fun: Hash table print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int m;
	hash_node_t *tmp;
	char flg = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		tmp = ht->array[m];
		while (tmp != NULL)
		{
			if (flg == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flg = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
