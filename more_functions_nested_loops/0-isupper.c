#include "main.h"
#include<stdio.h>
/**
 * _isupper - test if a char c is upper case or no
 * @c: char
 * Return: 1  if c is upper 0 if not
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 96)
		return (1);
	else
		return (0);
}
