#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_s -print string
 * @params: va_list
 * Return: none
 */
void print_s(va_list params)
{
	char *s;

	s = va_arg(params, char *);
	if (s)
	{
	printf("%s", s);
	}
	else
	{
		printf("Error");
	}
}
/**
 * print_c -print character
 * @params: va_list
 * Return: none
 */
void print_c(va_list params)
{
	char c;

	c = va_arg(params, int);
	printf("%c", c);
}
/**
 * print_d -print integer
 * @params: va_list
 * Return: none
 */
void print_d(va_list params)
{
	int d;

	d = va_arg(params, int);
	printf("%d", d);
}
/**
 * print_f -print float
 * @params: va_list
 * Return: none
 */
void print_f(va_list params)
{
	float f;

	f = va_arg(params, double);
	printf("%f", f);
}

/**
 * print_all - print many tyme of arguments
 * @format: string tha give us the types of the arguments
 * Return:none
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list params;
	print_t tpt[] = {
		{"s", print_s},
		{"c", print_c},
		{"d", print_d},
		{"f", print_f}
	};

	va_start(params, format);
	for (i = 0 ; format[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 4 ; j++)
		{
			if (*(format + i) == *(tpt[j].c))
			{
				if (format[i + 1] != '\0')
				{
					tpt[j].print_func(params);
					printf(", ");
				}
				else
				{
					tpt[j].print_func(params);
				}
			}
		}
	}
	printf("\n");
	va_end(params);
}
