#include <unistd.h>
#include "main.h"

/**
 * _putchar - putchar
 *
 * Return: 0 (SUCCESS)
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
