#include "lists.h"

/**
 * add_nodeint_end - add node end
 * @head : pointer to list
 * @n : number
 * Return: list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*new;
	listint_t       *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (*head);
}
