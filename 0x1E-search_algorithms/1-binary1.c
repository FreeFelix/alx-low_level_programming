#include "search_algos.h"

/**
 * binary_search - search a value in a sorted array of integer
 * using binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search in array
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1;
	int mid;
	if (array == NULL)
	{
		return (-1);
	}
	while (L < R)
	{
	mid = (L + R) / 2;

	if (value == array[mid])
	{
		return (mid);
	}
	else if(value < array[mid])
	{
		R = mid - 1;
	}
	else
	{
		L = mid + 1;
	}
	return (-1);
	}	
}
