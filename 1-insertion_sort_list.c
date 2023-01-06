#include "sort.h"

/**
 * _swap - function changes 2 positions
 * @node: variable structure
 * @list: variable structure
 */

void _swap(listint_t **node, listint_t **list)
{
	listint_t *head = *node;
	listint_t *aux1, *aux2;

	if (!(*node)->prev)
		*list = (*node)->next;

	aux1 = head->next;
	head->next = aux1->next;
	aux2 = head->prev;
	head->prev = aux1;
	aux1->next = head;
	aux1->prev = aux2;

	if (aux1->prev)
		aux1->prev->next = aux1;
	if (head->next)
		head->next->prev = head;

	*node = aux1;
}

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: variable structure
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (!list || !*list)
		return;

	node = *list;

	while (node && node->next)
	{
		if (node->n > node->next->n)
		{
			_swap(&node, list);
			print_list(*list);

			while (node && node->prev)
			{
				if (node->n < (node->prev)->n)
				{
					node = node->prev;
					_swap(&node, list);
					print_list(*list);
					node = node->next;
				}
				node = node->prev;
			}
		}
		node = node->next;
	}
}
