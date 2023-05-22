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
