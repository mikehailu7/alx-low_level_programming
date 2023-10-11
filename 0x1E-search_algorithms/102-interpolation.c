#include "search_algos.h"
/**
 * interpolation_search: This funciton will searches for a value in an array of integers using the Interpolation.
 * Author: MikiasHailu
 * Return: This will return index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t m, n, e;

	if (array == NULL)
		return (-1);

	for (n = 0, e = size - 1; e >= n;)
	{
		m = n + (((double)(e - n) / (array[e] - array[n])) * (value - array[n]));
		if (m < size)
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", m);
			break;
		}

		if (array[m] == value)
			return (m);
		if (array[m] > value)
			e = m - 1;
		else
			n = m + 1;
	}

	return (-1);
}
