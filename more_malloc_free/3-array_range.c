#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * array_range - create an array of integer
 * @min:integer
 * @max:integer
 * Return: arr
 */
int *array_range(int min, int max)
{
	int i, j = 0, *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min) + 1);
	if (!arr)
	{
		return (NULL);
	}
	for (i = min ; i <= max ; i++)
	{
		arr[j++] = i;
	}
	return (arr);
}
