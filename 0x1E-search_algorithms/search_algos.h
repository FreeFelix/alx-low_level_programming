#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - single linked list
 *
 * @n: Integer value in list
 * @index: index of a node in list
 * @next: Pointer to the next node
 *
 * Description:  single linked list node structure
 * in Alx project task
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
}listint_t;


/**
 * struct skiplist_s - single linked list with an expression line
 *
 * @n: Integer value in list
 * @index: index of a node in list
 * @next: point to the node
 * @express: Pointer to the next express node
 *
 * Description:  single linked list node structure with an express line
 * in Alx project task
 */

typedef struct skiplist_s
{
        int n;
        size_t index;
        struct skiplist_s *next;
	struct skiplist_s *express;
}skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif

