#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk: This function will locate the first occur of a str.
 * @accept: string
 * @s: string
 * Author: MikiasHailu
 * Return: will return O.
 */
char *_strpbrk(char *s, char *accept)
{
int a = 0;
int b = 0;
for (a = 0; s[a]; a++)
{
for (b = 0; accept[b]; b++)
if (*(accept + b) == s[a])
return (&(s[a]));
}
return (NULL);
}
