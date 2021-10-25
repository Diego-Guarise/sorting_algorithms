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
	while (now)
	{
		tmp = now;
		while (tmp->n < tmp->prev->n && tmp->prev)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;

		tmp->next = tmp->prev;
		tmp->prev = tmp->prev->prev;
		tmp->next->prev = tmp;

		if (!tmp->prev)
			*list = tmp;
		else
			tmp->prev->next = tmp;
		print_list(*list);
		}
		now = now->next;
}
