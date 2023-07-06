#include "hash_tables.h"

/**
 * key_index: this unsigned function will assign a key to the index.
 * @key: This character is the index key
 * @size: This integer shows the size of the hash.
 * Author: MIkiasHailu
 * Fun: key Index
 * Return: This function will return the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
