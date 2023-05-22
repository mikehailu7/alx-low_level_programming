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
