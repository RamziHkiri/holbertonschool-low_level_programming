#include"main.h"
/**
 * _pow_recursion - x power of y
 * @x:integer
 * @y:integer
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
/**
 * _sqrt_recursion -natural square number
 * @n:integer
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if (_pow_recursion(i, 2) == n)
		{
			return (i);
		}
		else if (_pow_recursion(i, 2) > n)
		{
			return (-1);
		}
	}
	return (0);
}
