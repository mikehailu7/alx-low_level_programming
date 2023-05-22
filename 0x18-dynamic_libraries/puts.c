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
