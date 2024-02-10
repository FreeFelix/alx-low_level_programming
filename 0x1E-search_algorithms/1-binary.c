#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{

	size_t i, L, R;

	if (array == NULL)
		return (-1);

	for (L = 0, R = size - 1; R >= L;)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = L + (R - L) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			R = i - 1;
		else
			L = i + 1;
	}

	return (-1);
}
