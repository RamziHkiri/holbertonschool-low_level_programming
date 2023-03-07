#include "main.h"
#include <stddef.h>

/**
 * _strstr -  finds the first occurrence of the substring
 * @haystack:string
 * @needle: string
 * Return: s or null
 */
char *_strstr(char *haystack, char *needle)
{	
	int i, j, x, k;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{       x = i;
		j = 0;
		while (needle[j] == haystack[x] && needle[j] !='\0')
		{
			x++;
			j++;
		}
		if (needle[j] == '\0')
		{
			for (k = 0 ; k < i ; k++)
			{
				haystack++;
			}
			return(haystack);
		}
	}
	return (NULL);

}
