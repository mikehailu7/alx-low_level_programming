#include "hash_tables.h"

/**
 * hash_table_set: THis function will sets a key to a value in the hash table
 * @value:This charater is for the node value.
 * @key: This character is the key for the node
 * Author: MikiasHailu.
 * Fun: Hash table.
 * Return: This will return 1 if successful.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *str;
	hash_node_t *node;

	if (!ht || !key)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	if (value)
		str = strdup(value);
	else
		str = NULL;

	node = ht->array[idx];

	if (!node)
		node = new_node(NULL);

	if (node->key)
	{
		ht->array[idx] = update_node(node, key, str);
		return (1);
	}
	node->key = strdup(key);
	node->value = str;
	node->next = NULL;

	ht->array[idx] = node;
	return (1);
}

/**
 * update_node: This function will added a node on the existing one
 * Author: MikiasHailu.
 * Fun: Hash table.
 * @key: THis character is the key
 * @node: THis pointer will point to the previously existing node.
 * Return: This will return to the head.
 */
hash_node_t *update_node(hash_node_t *node, const char *key, char *value)
{
	hash_node_t *tmp = node;

	while (tmp)
	{

		if (!strcmp(key, tmp->key))
		{
			free(tmp->value);
			tmp->value = value;
			return (node);
		}
		tmp = tmp->next;
	}

	tmp = node;
	node = new_node(node);
	if (!node)
	{
		node = tmp;
		return (node);
	}
	node->key = strdup(key);
	node->value = value;
	return (node);

}

/**
 * new_node: THis function will create a new node
 * Author: MikiasHailu.
 * Fun: Hash table.
 * Return: this will return the new node.
 */
hash_node_t *new_node(hash_node_t *c_node)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = NULL;
	node->value = NULL;
	node->next = c_node;

	return (node);
}
