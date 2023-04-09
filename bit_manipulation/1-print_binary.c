#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - convert integer to binary
 * @n:integer
 * Return:none
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
