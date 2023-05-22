#include "main.h"
#include <stdio.h>
/**
 * _atoi: This function will return the number and sine of a given num.
 * @m: This m is an array. 
 * Author: MikiasHailu
 * Return: This will return sign with magnitude of the number
 */
int _atoi(char *m)
{
    int aux2 = 1;
    unsigned int u;
    unsigned int num = 0;
	unsigned int cn = 0; 
    unsigned int s;
    unsigned int t;
    unsigned int tam;	
	while (*(m + cn) != '\0')
	{
		cn++;
	}
    for (u = 0; u < s; u++)
	{
		if (*(m + u) == '-')
			aux2 = aux2 * (-1);
	}
	tam = t - s;
	for (s = 0; s < cn; s++)
	{
		if (*(m + s) >= '0' && *(m + s) <= '9')
			break;
	}
	for (t = s; t < cn; t++)
	{
		if (!(*(m + t) >= '0' && *(m + t) <= '9'))
			break;
	}
	while (tam >= 1)
	{
		num = (num * 10) + (*(m + s) - '0');
		s++;
		tam--;
	}
	num = num * aux2;
	return (num);
}

#include "main.h"
/**
 * _isdigit: This function is used to check for a num.
 * @m: This one is an integer.
 * Author: MikiasHailu.
 * Return: retrun z if the code is correct.
 */
int _isdigit(int m)
{
int z = 0;

if (m >= 48 && m <= 57)
z = 1;
return (z);
}

#include "main.h"
/**
 * _puts: This function will print a bunch of strings
 * @n: This is a string
 * Author: mikiasHailu
 * Return : This will return nothing
 */

void _puts(char *n)
{
int z = 0;
while (n[z] != '\0')
{
_putchar(n[z]);
z++;
}
_putchar('\n');
}

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

#include "main.h"
/**
 * _memcpy: This function will copy bytes from memory src to dest.
 * @dest: destination area memory
 * @d: data
 * @src: source memory area
 * Author: MikiasHailu
 * Return: This function will return the destination
 */
char *_memcpy(char *dest, char *src, unsigned int d)
{
unsigned int z;
z= 0;
while (z < d)
{
dest[z] = src[z];
z++;
}
}

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

#include "main.h"
#include <ctype.h>
/**
 * _isalpha: This function will check for letters.
 * @m: will check for the letter
 * Author: MikiasHailu
 * Return: This will return null.
 */
int _isalpha(int m)
{
if (m >= 65 && m <= 90)
{
return (1);
}
else if (m >= 97 && m <= 122)
{
return (1);
}
else
return (0);
}

#include "main.h"
#include <ctype.h>
/**
 * _islower: This function will print the lower alphabet starting from a to z
 * @m: the character to print
 * Author: MikiasHailu
 * Return: This will return null.
 */
int _islower(int m)
{
if (m >= 97 && m <= 122)
{
return (1);
}
else
return (0);
}

#include <unistd.h>
/**
 * _putchar: This function will write m.
 * @m: The character to be written.
 * Author: MikiasHailu.
 * Return: return one if the program function well.
 */
int _putchar(char m)
{
	return (write(1, &m, 1));
}

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

#include "main.h"
/**
 * _memcpy: This Function will copies memory to the dest
 * @src: source memory area
 * @dest: destination area memory
 * @d: data
 * Author: MikiasHailu
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int d)
{
unsigned int k;
k = 0;
while (k < n)
{
dest[k] = src[k];
k++;
}
}

#include "main.h"
#include <ctype.h>

/**
 * _isupper: This function will check a to z for upppercase
 * @m: integer
 * Author: MikiasHailu
 * Return: Will return null if it is correct
 */
int _isupper(int m)
{
int z = 0;

if (m >= 65 && m <= 90)
z = 1;
return (z);
}

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

#include "main.h"
/**
 * _abs: This funciton will compute the absolute value of a num.
 * @d: this string will print character.
 * Author: mikiasHailu
 * Return: This will return d if it is positve and -d if it is negative;
 */
int _abs(int d)
{
if (d > 0)
{
return (d);
}
else
return (-d);
}

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
