#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * malloc_checked - allocate memoryusing malloc
 * @b:integer
 * Return: pointer to the allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *loc = malloc(b);

	if (!loc)
		exit(98);
	return (loc);
}
