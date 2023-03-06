#include"main.h"
#include <stddef.h>
/**
 * _strchr -function that locates a character in a string.
 * @s:string
 * @c:character
 * Return:res
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		s++;
	}
	if (s[i] == c)
		return (s);
	else
		return (NULL);
}
