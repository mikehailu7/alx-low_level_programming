#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @accept: This is a character.
 * @s: This one is a string
 * Author: mikiasHailu
 * Return: Will return a string.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int z; 
unsigned int x;
for (z = 0; s[z]; z++)
{
for (x = 0; accept[x]; x++)
{
if (s[z] == accept[x])
break;
}
if (s[z] != accept[x])
break;
}
return (z);
}
