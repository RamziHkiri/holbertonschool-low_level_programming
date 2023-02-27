#include<stdio.h>
#include"main.h"
/**
 * more_numbers - print numbers from 1 to 9 followed by new line
 *
 * Return: return 0123456789
 */
void more_numbers(void)
{
	int i, u, j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 15 ; i++)
		{
			u = i % 10;
			if (i >= 10)
			{
				_putchar('1');
			}
		_putchar(u + '0');
		}
		_putchar('\n');
	}
}
