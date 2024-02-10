#include "search_algos.h"


/**
  * advanced_binary_recursive - Searches recursively for a value
  * in a sorted array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t index;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (index = left; index < right; index++)
		printf("%d, ", array[index]);
	printf("%d\n", array[index]);

	index = left + (right - left) / 2;
	if (array[index] == value && (index == left || array[index - 1] != value))
		return (index);
	if (array[index] >= value)
		return (advanced_binary_recursive(array, left, index, value));
	return (advanced_binary_recursive(array, index + 1, right, value));
}



/**
 *advanced_binary -  a function that searches for a
 * value in a sorted array of integers.
 *
 * @array: pointer to the first element in the array
 * @size: Size of the array to search in
 * @value: Element to be searched
 * Return: return index of searched element
 */

int advanced_binary(int *array, size_t size, int value)
	{
		if (array == NULL || size == 0)
			return (-1);

		return (advanced_binary_recursive(array, 0, size - 1, value));
	}
