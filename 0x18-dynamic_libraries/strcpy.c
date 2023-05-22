#include "main.h"
#include <stdio.h>
/**
 * _strcpy: This function will copy string.
 * @dest: This is the des of string
 * Author: MikiasHailu
 * @src: This is the source of a string
 * Return: This will retrun the value dest
 */
char *_strcpy(char *dest, char *src)
{
int z = 0;
for (z = 0; src[z]; z++)
dest[z] = src[z];
return (dest);
}
