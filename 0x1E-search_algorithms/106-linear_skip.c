#include "search_algos.h"

/**
 * linear_skip - Searches for an algorithm in a sorted singly
 * linked list of integers using linear skip.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 * Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 * Uses the square root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump_step;

	if (list == NULL)
		return (NULL);

	for (node = jump_step = list; jump_step->next != NULL && jump_step->n < value;)
	{
		node = jump_step;
		if (jump_step->express != NULL)
		{
			jump_step = jump_step->express;
			printf("Value checked at index [%ld] = [%d]\n",
				jump_step->index, jump_step->n);
		}
		else
		{
			while (jump_step->next != NULL)
				jump_step = jump_step->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump_step->index);

	for (; node->index < jump_step->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}

