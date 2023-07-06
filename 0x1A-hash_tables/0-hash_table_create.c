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
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
