#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: an integer to swap
 * @b: an interger to swap
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
