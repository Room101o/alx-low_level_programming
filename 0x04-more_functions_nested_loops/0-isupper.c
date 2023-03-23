#include "main.h"

/**
 * _isupper - uppercase letters.
 * @c: An input character
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
