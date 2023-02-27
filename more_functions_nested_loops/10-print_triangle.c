#include"main.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 *
 * Return: triangle with the size n
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 0 ; i < size ; i++)
	{
		for (j = 1 ; j < size - i ; j++)
		{
			_putchar(' ');
		}
		for (k = 0 ; k <= i ; k++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}

	}
}
