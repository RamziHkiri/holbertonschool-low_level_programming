#include "main.h"
#include<stdio.h>
/**
 * print_array - print the content of an array
 * @n: number of element
 * @a:array of integer
 * Return: print array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
