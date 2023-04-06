#include "main.h"

/**
 * _strlen_recursion - strlen recursion
 * @s: string
 * Return: lenght string
 */
int _strlen_recursion(char *s)
{
	int res = 0;

	if (*s)
	{
		res += _strlen_recursion(s + 1);
		res++;
	}
	return (res);
}
