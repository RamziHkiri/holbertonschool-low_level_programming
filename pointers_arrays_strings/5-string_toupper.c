#include "main.h"
/**
 * *string_toupper - lower case to upper case
 * @str: string to test
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}

