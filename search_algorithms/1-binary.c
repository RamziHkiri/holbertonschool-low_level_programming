#include<stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * rec_binary_s -recursive methode for binary search
 * @array: the array to search in
 * @left: the start of the sub array
 * @right: the end of the sub array
 * @value: the value to search for
 * Return: the index of the value in the array or -1 if not found
 */
int rec_binary_s(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;

	if (array[i] == value)
		return (i);

	if (array[i] < value)
		return (rec_binary_s(array, i + 1, right, value));
	else
		return (rec_binary_s(array, left, i - 1, value));
}
/**
 * binary_search - the main wher we will call the recursive function
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value in the array or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (rec_binary_s(array, 0, size - 1, value));
}
