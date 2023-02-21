#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	for (s = 0 ; s < 10 ; s++)
	{
		putchar(s + '0');
	}
	for (s = 'a' ; s < 'g' ; s++)
	{
		putchar(s);
	}

	putchar('\n');

	return (0);
}
