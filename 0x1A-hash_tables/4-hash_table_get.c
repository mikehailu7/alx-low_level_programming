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
	unsigned long int idx;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
