#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s:singly linked list
 * Author: MikiasHailu
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s: Singly linked list with an express lane
 * AUthor: MIkiasHailu
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t left, size_t right, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
#endif
