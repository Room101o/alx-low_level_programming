#include "lists.h"

/**
 * print_listint - print list
 * @h : list
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	int	i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
