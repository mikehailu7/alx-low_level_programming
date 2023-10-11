#include "search_algos.h"
/**
 * jump_search: This will searches for a value in an array of integers using the Jump search algorithm
 * Author: MikiasHailu
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (m = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		m = jump;
		jump = jump + step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", m, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; m < jump && array[m] < value; m++)
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
	printf("Value checked array[%ld] = [%d]\n", m, array[m]);

	return (array[m] == value ? (int)m : -1);
}
