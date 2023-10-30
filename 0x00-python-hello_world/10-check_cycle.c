#include "lists.h"

/**
 * check_cycle - it checks if a singly linked list contain a cycle
 * @list: a singly linked list
 * return: 0 if their is no cycle and 1 if their is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *five;
	listint_t *six;

	while (list != NULL && list->next != NULL)
	{
		five = list->next;
		six = list->next->next;

		if (five == six)
		{
			return (1);
		}
	}
	return (0);
}
