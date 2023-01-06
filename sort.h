#ifndef SORT_H
#define SORT_H

/* LIBRARIES */

#include <stdio.h>
#include <stdlib.h>

/* STRUCTURES */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void f_swap(int *pos1, int *pos2);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
