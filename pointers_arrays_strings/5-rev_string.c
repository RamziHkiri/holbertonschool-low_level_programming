#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @s:string
 * Return: gnirts
 */
void rev_string(char *s)
{
	int j, i, t = 0;
	char tmp;

	for (i = 0 ; s[i] != '\0'; i++)
		;
	for (j = i - 1; j > (i - 1) / 2; j--)
	{
		tmp = s[j];
		s[j] = s[t];
		s[t] = tmp;
		t++;
	}
}
