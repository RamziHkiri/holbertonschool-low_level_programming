#include "main.h"
/**
 * print_diagonal - print diagonal of n
 * @n: the length of diagonal
 * Return: diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			if (j < i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	}
}

