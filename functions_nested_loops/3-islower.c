#include "main.h"
/**
 * _islower - test if a character is lower case or no
 * @c: the tested character
 *
 * Return: 1 for lowercase character and 0 for others characters
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
