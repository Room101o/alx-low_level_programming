#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 ()
 */

int main(void)
{
	long int f1;
	int	i;
	long int	f2;
	long int	res;

	f1 = 1;
	f2 = 2;
	i  = 3;
	res = f1;
	printf("%ld, %ld, ", f1, f2);
	while (i <= 50)
	{
		res = f2 + f1;
		if (i < 50)
			printf("%ld, ", res);
		else
			printf("%ld", res);
		f1 = f2;
		f2 = res;
		i++;
	}
	printf("\n");
	return (0);
}
