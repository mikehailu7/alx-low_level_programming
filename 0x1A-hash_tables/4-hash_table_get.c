#include "hash_tables.h"

/**
 * hash_table_get: This function will retrieves a key value.
 * @ht: This it the table that will retrive the key,
 * Author: MIkiasHailu
 * Fun: Hasttablec
 * @key: This character will find the value of the key.
 * Return: value associated with ke
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
