#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using insertion sort algorithm
 * @list: double pointer to head node of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = (*list)->next;

	while (temp != NULL)
	{
		listint_t *temp3, *temp2 = temp;

		while (temp2 != *list && temp2->prev != NULL && temp2->prev->n > temp2->n)
		{
			temp3 = temp2->prev;
			temp3->next = temp2->next;
			if (temp2->next)
				temp2->next->prev = temp3;
			temp2->next = temp3;
			temp2->prev = temp3->prev;
			if (temp3->prev)
				temp3->prev->next = temp2;
			else
				*list = temp2;
			temp3->prev = temp2;
			print_list(*list);
		}
		temp = temp->next;
	}
}
