#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * str_concat -concatinate two strings
 * @s1:string
 * @s2:string
 * Return:res
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, k, j, debs2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0 ; s2[j] != '\0' ; j++)
		;
	concat = malloc(sizeof(char) * (i + j));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (k = 0 ; k < i ; k++)
		concat[k] = s1[k];
	for (k = i ; k < i + j ; k++)
		concat[k] = s2[debs2++];
	concat[i + j] = '\0';
	return (concat);
}
