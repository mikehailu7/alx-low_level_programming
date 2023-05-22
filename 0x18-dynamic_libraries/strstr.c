#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strstr: This function will find the first occurence of a string.
 * @needle: This one is a string.
 * @haystack: This one is another string
 * AUthor: MikiasHailu
 * Return: This will return the pointer to the first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int c;
    int d; 
    int b = 0;
	for (d = 0; needle[d]; d++)
    ;
	if (d == 0)
	return (haystack);
	while (haystack[a])
	{
		if (haystack[a] == needle[b])
		{
            b++;
			a++;
			for (c = a; haystack[c]; c++)
			{
				if (needle[b] == '\0')
					return (&(haystack[a - 1]));
				if (haystack[c] != needle[b])
					break;
				b++;
			}
		}
		a++;
		b = 0;
	}
	return (NULL);
}
