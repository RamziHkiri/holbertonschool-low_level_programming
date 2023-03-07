#include"main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the diagonal of matrice
 * @a: array 2d
 * @size: size of the matrice
 * Return:sum
 */
void print_diagsums(int *a, int size)
{
	int i, j, d2 = 0,  d1 = 0, n = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
			{
			d1 = d1 + a[n];
			}
			if (i + j == size - 1)
			{
				d2 = d2 + a[n];
			}
			n++;
		}
	}
	printf("%d, %d\n", d1, d2);
}
