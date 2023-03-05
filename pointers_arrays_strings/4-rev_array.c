#include "main.h"
/**
 * reverse_array - reverse an array of integers
 * @a:array
 * @n:length of the array
 * Return: revers erray
 */
void reverse_array(int *a, int n)
{
	int j, tmp, t = 0;
		;
	for (j = n - 1; j > (n - 1) / 2; j--)
	{
		tmp = a[j];
		a[j] = a[t];
		a[t] = tmp;
		t++;
	}
}
