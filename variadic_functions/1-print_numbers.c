#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include"variadic_functions.h"
/**
 * print_numbers -print al numbers in parametres
 * @separator:separate between characters
 * @n:number of parametres
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	int a;
	unsigned int i;

	va_start(params, n);
	for (i = 0 ; i < n ; i++)
	{
		a = va_arg(params, int);
		if (i < n - 1)
		{
			printf("%d%s", a, separator);
		}
		else
		{
			printf("%d\n", a);
		}
	}
}
