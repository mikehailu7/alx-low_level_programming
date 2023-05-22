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
