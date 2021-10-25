#include "sort.h"
/**
 * insertion_sort_list - Write a function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Head.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *now, *tmp;

	if (!list || !(*list) || !(*list)->next)
		return;
	
	now = *list;
	tmp = now;
	while (now)
	{
		while (tmp->n > tmp->prev->n && tmp->prev)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
		}
		if (tmp->prev == NULL)
			(*list = tmp);
		else
			tmp->prev->next = tmp;
		print_list(*list);
	}
	now = now->next;
}
