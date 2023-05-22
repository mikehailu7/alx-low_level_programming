#include "main.h"
/**
 * _strncpy: This function will copy str.
 * @dest: THis is the destination character.
 * @d: this is an integer
 * @src: This is the source character.
 * Author: MIKiasHailu
 * Return: Will return to the Dest.
 */
char *_strncpy(char *dest,  int d, char *src)
{

int b = 0;

for (b = 0; src[b] != '\0'; b++)
{
if (b < d)
{
dest[b] = src[b];
}
}
for (; b < d; b++)
{
dest[b] = '\0';
}
return (dest);
}
