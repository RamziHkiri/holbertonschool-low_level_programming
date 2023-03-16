#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - initialize an array using malloc
 * @size:size of the array
 * @c: content of the array
 * Return: null or array full of c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}
