#include "hash_tables.h"

/**
 * add_to_sorted_list: This function will add a node to the sorted.
 * @node: This will represent the node to be added.
 * @table: THis represents the hash table which is sorted.
 * Author: MikiasHailu.
 * Fun: Cool.
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tmp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tmp = table->shead;
	while (tmp != NULL)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_delete: THis will deletes a sorted table
 * Author: MikiasHailu.
 * Fun: Cool.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int m;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (m = 0; m < ht->size; m++)
	{
		while (ht->array[m] != NULL)
		{
			next = ht->array[m]->next;
			free(ht->array[m]->key);
			free(ht->array[m]->value);
			free(ht->array[m]);
			ht->array[m] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}

/**
 * shash_table_create: This will sort a hast table.
 * @size: THis integer shows the size of the hash table
 * Author: MikiasHailu
 * Fun: Cool
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *th;
	unsigned long int m;

	th = malloc(sizeof(shash_table_t));
	if (th == NULL)
		return (NULL);
	th->size = size;
	th->shead = NULL;
	th->stail = NULL;
	th->array = malloc(sizeof(shash_node_t) * size);
	if (th->array == NULL)
	{
		free(th);
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		th->array[m] = NULL;
	}
	return (th);
}

/**
 * shash_table_set: This function will sets a key to a value in the hash table
 * @key: This character is the key for the data.
 * @value: This character is the data to be added.
 * Author: MikiasHailu.
 * Fun: Cool.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *nh, *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	nh = make_shash_node(key, value);
	if (nh == NULL)
		return (0);
	nh->next = ht->array[index];
	ht->array[index] = nh;
	add_to_sorted_list(ht, nh);
	return (1);
}

/**
 * make_shash_node: This functionw will make a node for the hash.
 * Author: MikiasHailu.
 * Fun: Cool.
 * @key: This character is the key for the data.
 * @value: This character is the data to be stored.
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *nh;

	nh = malloc(sizeof(shash_node_t));
	if (nh == NULL)
		return (NULL);
	nh->key = strdup(key);
	if (nh->key == NULL)
	{
		free(nh);
		return (NULL);
	}
	nh->value = strdup(value);
	if (nh->value == NULL)
	{
		free(nh->key);
		free(nh);
		return (NULL);
	}
	nh->next = nh->snext = nh->sprev = NULL;
	return (nh);
}

/**
 * shash_table_print: THis will prints the table to be sorted.
 * Author: MikiasHailu.
 * Fun: Cool.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flg = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (flg == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flg = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_get: This fucntion will retrieve a value from the hash table
 * @key: This character is the key for the data.
 * @ht: This represents the hash table
 * Author: MikiasHailu.
 * Fun: Cool.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print_rev: THis will prints a sorted hash table in the reverse.
 * Author: MikiasHailu.
 * Fun: Cool.
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flg = 0;
	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (flg == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flg = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

