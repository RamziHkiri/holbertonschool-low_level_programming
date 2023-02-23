#include "main.h"
#include <stdlib.h>
/**
 *times_table -  times table
 *
 *
 * Return: matrice of times table
 */
void times_table(void)
{
	int i, j, x, d;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			x = i * j;
			if (j > 0 && x < 10)
				_putchar(' ');
			if (x < 10)
			{
				_putchar(x + '0');
			}
			else
			{
				d = x / 10;
				_putchar(d + '0');
				_putchar(x % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
