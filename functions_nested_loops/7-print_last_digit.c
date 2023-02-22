#include "main.h"
/**
 * print_last_digit - test if a character is lower case or no
 * @n: integer used 
 *
 * Return: return last number of n
 */
int print_last_digit(int n)
{
	int r;
	r =(n % 10);
	if (r > 0)
	{
		_putchar(r + '0');
		return (r);
	}
	else
	{
		_putchar(-r + '0');
		return (-r);
	}
}
