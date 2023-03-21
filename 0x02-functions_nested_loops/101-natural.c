#include <stdio.h>

/**
 * main - natural
 *
 * Return: 0 ()
 */

int main(void)
{
	int	i;
	int	res;

	i = 1023;
	res = 0;
	while (i != 0)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			res += i;
		i--;
	}
	printf("%d\n", res);
	return (0);
}
