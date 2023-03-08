#include"main.h"
/**
 * factorial - calculate the factorial of n
 * @n:integer
 * Return: return res
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

