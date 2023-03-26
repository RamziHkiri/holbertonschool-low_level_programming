#include<stdio.h>
#include"function_pointers.h"
/**
 * print_name -print name using function pointer
 * @name:name to be printed
 * @f: function pointer that print string
 * Return:nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);
}
