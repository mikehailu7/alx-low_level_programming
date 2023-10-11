#include "search_algos.h"
/**
 * rec_search: This function will searches for a value in an array of
 * Author: MikiasHailu
 * Return: This will return index of the number.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t m;
	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (m = left; m < right; m++)
		printf("%d, ", array[m]);
	printf("%d\n", array[m]);

	m = left + (right - left) / 2;
	if (array[m] == value && (m == left || array[m - 1] != value))
		return (m);
	if (array[m] >= value)
		return (advanced_binary_recursive(array, left, m, value));
	return (advanced_binary_recursive(array, m + 1, right, value));
}

/**
 * advanced_binary: This fucntion will calls to rec_search to return the index of the number
 * Author: Mikias Hailu
 * Return: This will return index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
