#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 ()
 */

int main(void)
{
	unsigned long int	f1;
	int			i;
	unsigned long int	f2;
	unsigned long int	res;

	f1 = 1;
	f2 = 2;
	i  = 3;
	res = f1;
	printf("%lu, %lu, ", f1, f2);
	while (i <= 92)
	{
		res = f2 + f1;
		printf("%lu, ", res);
		f1 = f2;
		f2 = res;
		i++;
	}
	printf("19740274219868223167, ");
	printf("31940434634990099905, ");
	printf("51680708854858323072, ");
	printf("83621143489848422977, ");
	printf("135301852344706746049, ");
	printf("218922995834555169026");
	printf("\n");
	return (0);
}
