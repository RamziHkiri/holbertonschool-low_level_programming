#include<stdio.h>
/**
 * main - Printing prints the alphabet in lowercase,
 * followed by a new line except the"q,e".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s;

	for (s = 'a' ; s <= 'z'; s++)
	{
		if (s != 'q' && s != 'e')
		{
		putchar(s);
		}
	}
	putchar('\n');

	return (0);
}
