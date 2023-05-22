#include "main.h"
/**
 * _strcat: This function have to parameters dest and src.
 * @src: This one is a string to append to dest.
 * @dest: This one is a string to append by src.
 * Author: MikiasHailu
 * Return: This will retrun address to the dest
 */
char *_strcat(char *dest, char *src)
{
	int k, z;
	k = z = 0;
	while (*(dest + k))
		k++;
	while ((*(dest + k) = *(src + z)))
	{
		k++;
		z++;
	}
	return (dest);
}
