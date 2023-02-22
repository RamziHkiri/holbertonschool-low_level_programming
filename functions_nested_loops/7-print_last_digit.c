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
	r = _abs(n % 10);
	_putchar(r + '0');
	return (r);
}
