#include "main.h"
/**
 * _strlen: THis function will return string length.
 * @s: This is a string 
 * Author: mikiasHailu
 * Return: the value of the length i
 */
int _strlen(char *s)
{
int z = 0;

while (s[z])
z++;
return (z);
}
