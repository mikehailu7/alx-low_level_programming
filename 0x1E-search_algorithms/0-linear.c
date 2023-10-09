#include "search_algos.h"
/**
 * linear_search: This will searche for a value in an array of
 * Author: MikiasHailu
 * Return: This will always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int m;
	if (array == NULL)
		return (-1);

	for (m = 0; m < (int)size; m++)
	{
		printf("Value checked array[%u] = [%d]\n", m, array[m]);
		if (value == array[m])
			return (m);
	}
	return (-1);
}
