#include <unistd.h>
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
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
