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
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = calloc(1, sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
