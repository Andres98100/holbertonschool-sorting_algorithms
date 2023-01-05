#include "sort.h"

/**
 * selection_sort - function sorts an array of integers in ascending order
 * @array: variable int
 * @size: variable size
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				f_swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
}

/**
 * f_swap - change two positions
 * @pos1: variable int
 * @pos2: variable int
*/

void f_swap(int *pos1, int *pos2)
{
	int aux;

	aux = *pos1;
	*pos1 = *pos2;
	*pos2 = aux;
}
