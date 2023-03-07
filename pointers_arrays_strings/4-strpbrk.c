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

		for (i = 0 ; s[i] != '\0' ; i++)
		{
			for (j = 0 ; accept[j] != ' ' && accept[j] != '\0' ; j++)
			{
				if (accept[j] == s[i])
				{
					return (&s[i]);
				}
			}
		}
	return (0);
}
