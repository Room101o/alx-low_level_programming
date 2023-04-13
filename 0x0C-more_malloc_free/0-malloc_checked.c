#include "main.h"

/**
 * malloc_checked - check malloc
 * @b: u i
 * Return: pointer to allocate
 */

void *malloc_checked(unsigned int b)
{
	void	*str;

	str = malloc(b);
	if (!str)
		exit(98);
	return (str);
}

