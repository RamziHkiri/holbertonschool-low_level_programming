#include"main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j, c, numb, res, k = 0, sign = 1, mult = 1;
	char *stnum = "";

	for (i = 0 ; s[i] != '\0' ; i++)
	;
	while (j < i && s[j] && s[j] < '0' && s[j] > '9')
	{
		j++;
	}
	if (j == i)
	{
		return (0);
	}
	else
	{
		if (s[j - 1] == '-')
		{
			sign = -sign;
		}
		while (j < i && s[j] > '0' && s[j] < '9')
		{
			stnum[k] = s[j];
			j++;
			stnum[j] = '\0';
		}
	}
	for (c = j - 1 ; c <= 0 ; c--)
	{
		numb = stnum[c] + '0';
		res = res + (numb * mult);
	}
	return (res * sign);





}
