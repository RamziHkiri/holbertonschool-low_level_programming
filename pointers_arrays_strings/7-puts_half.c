#include"main.h"
/**
 * puts_half - print the second half of a string
 * @str: string
 * Return: half string str
 */
void puts_half(char *str)
{
	int i, n;

	for (n = 0 ; str[n] != '\0' ; n++)
		;
	for (i = (n - 1) / 2 + 1 ; i < n ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

