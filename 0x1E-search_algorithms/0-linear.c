#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * linear_search: This will searche for a value in an array of
 * Author: MikiasHailu
 * Return: This will always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t m = 0;

	if (!array || size == 0)
		return (-1);

	while (m < size)
	{
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] == value)
			return (m);
		m++;
	}

	return (-1);
}
