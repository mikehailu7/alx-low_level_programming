#include "hash_tables.h"

/**
 * hash_djb2: This funciton will show djb2.
 * @str: THis character is used to make value of the hash.
 * Author: MikiasHailu
 * Fun: djb2
 * Return: THis will return the value of the hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int m;

	h = 5381;
	while ((m = *str++))
	{
		h = ((h << 5) + h) + m;
	}
	return (h);
}
