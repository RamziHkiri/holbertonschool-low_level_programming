#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 * _pow - power function
 * @a: integer
 * @b:integer
 * Return: a pow b
 */
int _pow(int a, int b)
{
	int i, res = 1;

	for (i = 1 ; i <= b ; i++)
	{
		res *= a;
	}
	return (res);
}
/**
 * binary_to_uint -convert a binary number to unsigned int
 * @b:string
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, multi = 0, result = 0;

	if (b == NULL)
		return (0);
	for (len = 0 ; b[len] != '\0' ; len++)
		;
	for (i = len - 1 ; i >= 0 ; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
		{
			result += _pow(2, multi);
		}
		multi++;
	}
	return (result);
}
