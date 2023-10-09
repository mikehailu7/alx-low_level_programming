#include "search_algos.h"
#include <math.h>
/**
 * jump_search: This will searches for a value in an array of integers using the Jump search algorithm
 * Author: MikiasHailu
 */
int jump_search(int *array, size_t size, int value)
{
	int index, n, l, pre;

	if (array == NULL || size == 0)
		return (-1);
	n = (int)sqrt((double)size);
	l = 0;
	pre = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		k++;
		pre = idx;
		idx = k * l;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", pre, idx);
	for (; pre <= idx && pre < (int)size; pre++)
	{
		printf("Value checked array[%d] = [%d]\n", pre, array[pre]);
		if (array[pre] == value)
			return (pre);
	}

	return (-1);
}
