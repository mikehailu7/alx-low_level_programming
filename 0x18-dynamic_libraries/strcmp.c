#include "main.h"
/**
 * _strcmp: This function will compare strings.
 * Author: MikiasHailu
 * Return: integer j
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;
int b = 0;
while (s1[a] == s2[a] && s1[a] != '\0')
{
a++;
}
b = b + s1[a] - s2[a];
return (b);
}
