#include "search_algos.h"
/**
 * binary_search: This Searche for a value in a sorted array of integers using binary search.
 * Author: Mikias Hailu
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (m = left; m < right; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = left + (right - left) / 2;
		if (array[m] == value)
			return (m);
		if (array[i] > value)
			right = m - 1;
		else
			left = m + 1;
	}

	return (-1);
}
