#include "main.h"
/**
* swap_int - swaps the value of int a and int b
* @a: first intger 
* @b: second intger
* Return 0
* mikias hailu
*/
void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
}
