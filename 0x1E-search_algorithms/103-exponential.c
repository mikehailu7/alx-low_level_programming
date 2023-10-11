#include "search_algos.h"
/**
 * _binary_search: This function Searches for a value in a sorted array of integers using binary search.
 * Author: Mikias Hailu
 * Return: This return If the value is not present or the array is NULL, -1.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t m;
	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (m = left; m < right; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = left + (right - left) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			right = m - 1;
		else
			left = m + 1;
	}

	return (-1);
}

/**
 * exponential_search: This will Searches for a value in a sorted array of integers using exponential search.
 * Author: MikiasHailu
 * Return: This will if the value is not present or the array is NULL, -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t m = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (m = 1; m < size && array[m] <= value; m = m * 2)
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
	}

	right = m < size ? m : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", m / 2, right);
	return (_binary_search(array, m / 2, right, value));
}
