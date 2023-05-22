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
