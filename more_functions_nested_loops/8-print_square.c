#include<stdio.h>
#include"main.h"
/**
 * print_square - print numbers from 1 to 9 followed by new line
 * @size: size of square
 * Return: return 0123456789
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	}
}
