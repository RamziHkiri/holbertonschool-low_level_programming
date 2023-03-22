#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate a memory for an array
 * @nmemb:elements number
 * @size: elements size
 * Return: allocaterd memory's pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc = malloc(nmemb * size);

	if (!alloc)
		return (NULL);
	for (i = 0 ; i < size * nmemb ; i++)
	{
		alloc[i] = '\0';
	}
	return (alloc);
}
