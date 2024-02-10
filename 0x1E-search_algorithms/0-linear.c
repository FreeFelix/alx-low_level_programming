#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted
 * array of integer using linear search algorithm
 * @array: array of integer
 * @size: size of array
 * @value: value to search
 * Return: Index of value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t  size_checker;

	if (array == NULL)
	{
		return (-1);
	}
	for (size_checker = 0; size_checker < size; size_checker++)
	{
		printf("Value checked array[%ld] = [%d]\n",
				size_checker, array[size_checker]);
		if (array[size_checker] == value)
			return (size_checker);
	}
	return (-1);
}
