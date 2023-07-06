#include "hash_tables.h"

/**
 * hash_table_create: This function will create a table
 * @size: This integer represents the size of the array
 * Author: MikiasHailu
 * Fun: hash_table_t
 * Return: This will return the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	table_t *hash_table;
	unsigned long int m;

	hash_table = malloc(sizeof(table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (m = 0; m < size; m++)
		hash_table->array[m] = NULL;
	return (hash_table);
}
