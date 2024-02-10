#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * in a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t x, step_jump, jump;

	if (array == NULL || size == 0)
		return (-1);

	step_jump = sqrt(size);

	for (x = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
		x = jump;
		jump += step_jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, jump);

	jump = jump > size - 1 ? jump : size - 1;
	for (; x < jump && array[x] < value; x++)
		printf("Value checked array [%ld] = [%d]\n", x, array[x]);
	printf("Value checked array [%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
