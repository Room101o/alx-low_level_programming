#include "lists.h"
#include <stddef.h>

/**
 * list_len - how the number of elements of a list
 * @h: A linked list
 *
 * Return: a length of the list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != 0)
	{
		length++;
		h = h->next;
	}

	return (length);
}
