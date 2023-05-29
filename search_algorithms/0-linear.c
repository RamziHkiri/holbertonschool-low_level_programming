#include "search_algos.h"
#include<stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * linear_search - search  value in sorted array using linear search
 * @array:sorted array
 * @size: size of the array
 * @value: the value to search for in the array
 * Return: the index of the value or -1 if it not founds
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
