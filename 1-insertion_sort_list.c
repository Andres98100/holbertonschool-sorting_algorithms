#include "sort.h"

/**
 * _swap - function changes 2 positions 
 * @node: variable struct
*/

listint_t *_swap(listint_t *node, listint_t **list)
{
    listint_t *head = node;
    listint_t *aux = node;

    head = head->next;
    head->prev = aux->prev;

    aux->next = head->next;
    head->next = aux;
    (head->next)->prev = head;

    node = head;
    if (node->prev == NULL)
        *list = node;
    return (node);
}

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: variable structure
*/

void insertion_sort_list(listint_t **list)
{
    listint_t *node = *list;

    while (node && node->next)
	{
		if (node->n > (node->next)->n)
        {
            printf("%i\n\n", (node->prev)->n);
            node = _swap(node, list);
            printf("%i\n", (node->prev)->n);
            printf("%i\n", (node)->n);
            printf("%i\n", (node->next)->n);
            /**list = node;*/
            return;
            while (node && node->prev && node->n < (node->prev)->n)
            {
                node = _swap(node, list);
                /*printf("%i\n", node->n);*/
                node = node->prev;
            }
        }
        node = node->next;
	}
	/**list = node;*/
}
