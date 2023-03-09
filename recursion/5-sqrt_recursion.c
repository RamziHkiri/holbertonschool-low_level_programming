#include"main.h"
#include<stdio.h>
/**
 * _is_sqrt_of_n - verifie if i ^2 equal to n
 * @n:integer
 * @i:integer
 * Return: x^y
 */
int _is_sqrt_of_n(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i == n)
		return (-1);
	else
		return (_is_sqrt_of_n(n, i + 1));
}
/**
 * _sqrt_recursion -natural square number
 * @n:integer
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_is_sqrt_of_n(n, i));
	}
}

