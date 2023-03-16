#include<stdio.h>
#include"main.h"
#include <stdlib.h>
/**
 * _strdup -duplicate a string using malloc
 * @str:duplicated string
 * Return:res
 */
char *_strdup(char *str)
{
	char *res;
	int i, j;

	if (!str)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0'; i++)
		;
	res = malloc(sizeof(char) * i + 1);
	if (!res)
	{
		return (NULL);
	}
	for (j = 0 ; str[j] != '\0' ; j++)
	{
		res[j] = str[j];
	}
	res[i] = '\0';
	return (res);
}
