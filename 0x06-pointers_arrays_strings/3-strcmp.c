#include "main.h"
/**
 *_strcmp - function comparison of strings
 *@s1:  The first string
 *@s2:  The second string
 *Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
	{
		j = s1[i] - s2[i];
		break;
	}
	}
		return (j);
}
