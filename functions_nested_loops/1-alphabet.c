#include "main.h"
/**
 * print_alphabet - print alphabet from a to z
 *
 * Return: void
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a' ; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
