#include "main.h"
/**
 * _strchr: This function will locate char in str.
 * @s: string
 * Author: MikiasHailu.
 * @m: character
 * Return: will return O.
 */
char *_strchr(char *s, char m)
{
do {
if (*s == m)
return ((char *)s);
}
while (*s++)
;
return (0);
}
