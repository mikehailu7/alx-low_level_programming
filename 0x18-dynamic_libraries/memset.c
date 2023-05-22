#include "main.h"
/**
 * _memset: THis function will fill memory with constant
 * @n: This integer is memory area.
 * @b: This character is a byte
 * @s: This character is a memory.
 * Author: mikiasHailu.
 * Return: This will return pointer to the memory area.
 */
char *_memset( unsigned int n, char *s, char b)
{
unsigned int z;
z = 0;
while (z < n)
{
*(s + z) = b;
z++;
}
return (s);
}
