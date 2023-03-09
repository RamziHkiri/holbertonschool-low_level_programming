#include"main.h"
/**
 * _strlen_recursion - string length
 * @s:string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0, length = 0;

	if (s[i] != '\0')
	{
		length++;
		s++;
		length = length + _strlen_recursion(s);
	}
	return (length);
}
