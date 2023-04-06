#include "main.h"

/**
 * sqrtt - sqrt
 *@x: number
 *@y: number
 *Return: sq
 */
int     sqrtt(int x, int y)
{
	if (x * x == y)
		return (x);
	else
		return (sqrtt(x + 1, y));
}
/**
 * _sqrt_recursion - sqrt
 * @n: number
 * Return: sqrt number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (sqrtt(1, n));
}
