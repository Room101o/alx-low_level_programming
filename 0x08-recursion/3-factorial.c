#include "main.h"

/**
 * factorial - factorial number
 * @n: number
 * Return: fac n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
