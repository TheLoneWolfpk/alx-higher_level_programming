#include "lists.h"

/**
 * check_cycle - it checks if a singly linked list contain a cycle
 * @list: a singly linked list
 * return: 0 if their is no cycle, 1 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *three, *four;

	if (list == NULL || list->next == NULL)
		return (0);
	three = list->next;
	four = list->next->next;

	while (three && four && four->next)
	{
		if (three == four)
			return (1);
		three = three->next;
		four = four->next->next;
	}
	return (0);

}
