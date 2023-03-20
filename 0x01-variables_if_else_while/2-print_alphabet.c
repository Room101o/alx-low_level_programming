#include<stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 97;
	while (c != 123)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
