#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *aux;

	if (!(*list))
		return;
	tmp = (*list)->next;
	while (tmp)
	{
		if (tmp->prev && tmp->n < tmp->prev->n)
		{
			aux = tmp->next;
			while (tmp->prev && tmp->n < tmp->prev->n)
			{
				tmp->prev->next = tmp->next;
				if (tmp->next)
					tmp->next->prev = tmp->prev;
				tmp->next = tmp->prev;
				if (tmp->next)
				{
					tmp->prev = tmp->next->prev;
					tmp->next->prev = tmp;
				}

				if (!tmp->prev)
					(*list) = tmp;
				else
					tmp->prev->next = tmp;
				print_list(*list);
			}
			tmp = aux;
		}
		else
			tmp = tmp->next;
	}
}
