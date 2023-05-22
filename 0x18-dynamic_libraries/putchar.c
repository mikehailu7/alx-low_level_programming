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
