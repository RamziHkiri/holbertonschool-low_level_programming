#include<stdio.h>
#include"main.h"
/**
 * print_numbers - print numbers from 1 to 9 followed by new line
 *
 * Return: return 0123456789
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		_putchar(i + '0');
	putchar('\n');
}
