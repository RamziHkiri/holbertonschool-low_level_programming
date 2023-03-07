#include"main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes write man strpbrk
 * @s:string
 * @accept:string
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != ' ' && s[j] != '\0' ; j++)
		{
			if (accept[i] == s[j])
			{
				s++;
				return (s);
			}

		}
		s++;
	}
	return (s);
}
