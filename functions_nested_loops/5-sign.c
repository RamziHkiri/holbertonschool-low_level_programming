#include "main.h"
/**
 * print_sign - test if number i positive or negative
 * @i: the tested number
 *
 * Return: 1 positive and 0 for zero and -1 for negative
 */
int print_sign(int i)
{
	if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
