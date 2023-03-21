#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 ()
 */

int main(void)
{
	long int f1;
	long int	f2;
	long int	res;
	long int	res2;

	f1 = 1;
	f2 = 2;
	res = 0;
	res2 = 2;
	while (res < 4000000)
	{
		res = f2 + f1;
		if (res % 2 == 0)
			res2 += res;
		f1 = f2;
		f2 = res;
	}
	printf("%ld\n", res2);
	return (0);
}
