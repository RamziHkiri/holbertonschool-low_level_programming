#include"main.h"
/**
 * cap_string -capital
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] < 65 && s[i] > 90 && s[i] < 97 && s[i] > 122)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
