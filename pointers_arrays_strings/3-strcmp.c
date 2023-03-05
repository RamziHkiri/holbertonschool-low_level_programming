#include"main.h"
/**
 * _strcmp - compaire two strings
 * @s1: first string
 * @s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, n, m;

	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0 ; s2[j] != '\0' ; j++)
		;
	m = 0;
	n = 0;
	while (s1[m] != '\0' && s2[n] != '\0' && s1[m] == s2[n])
	{
		m++;
		n++;
	}
	if (s1[m] == s2[n])
		return (0);
	else
		return (s1[m] - s2[n]);
}
