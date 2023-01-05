#include "sort.h"

/**
 * bubble_sort - function sorts an array of integers in ascending order
 * @array: variable int
 * @size: variable size
*/

void bubble_sort(int *array, size_t size)
{
	int i, j, aux;
	listint_t list;


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
			}
		}
		print_array(array, size);
	}
}