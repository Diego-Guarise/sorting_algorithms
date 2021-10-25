#include "sort.h"
/**
 * insertion_sort_list - Write a function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Head.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *now, *tmp, *tmp2;

	if ((*list)->next)
		now = (*list)->next;

	while (now)
	{
		if (now->n > now->next->n)
		{
			tmp->n = now->n;
			now->n = now->next->n;
			now->next->n = tmp->n;
			if (now->n < now->prev->n)
			{
				tmp2->n = now->prev->n;
				now->n = now->prev->n;
				now->prev->n = tmp2->n;
				insertion_sort_list(list);
			}
		}
		if (now->next)
		{
			now = now->next;
			insertion_sort_list(list);
		}
	}
}
