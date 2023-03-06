#include"main.h"
/**
 * _strspn - the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return:integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i, j;

	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != ' ' && s[j] != '\0' ; j++)
			if (accept[i] == s[j])
			{
				res++;
			}
	}
	return (res);
}
