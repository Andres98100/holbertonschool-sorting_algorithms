#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {1, 22, 20, 21, 2, 31, 32, 34, 41, 39, 47, 79, 68, 62, 84, 87, 98, 92, 95, 91};
	size_t n = sizeof(array) / sizeof(array[0]);/* 20 */

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}