#include "lists.h"

/**
 * free_listint2 - free list2
 * @head : pointer list
 */

void free_listint2(listint_t **head)
{
	listint_t	*tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
