#include "lists.h"

/**
 * listint_len - len list
 * @h : list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int	len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
