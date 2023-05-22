#include "main.h"
/**
 * _memcpy: This function will copy bytes from memory src to dest.
 * @dest: destination area memory
 * @d: data
 * @src: source memory area
 * Author: MikiasHailu
 * Return: This function will return the destination
 */
char *_memcpy(char *dest, char *src, unsigned int d)
{
unsigned int z;
z= 0;
while (z < d)
{
dest[z] = src[z];
z++;
}
}
