#include "main.h"
/**
 * *_strncat - concat n char to dest
 * @n:integer
 * @dest: destination string
 * @src: string to be added
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	;
	for (j = 0 ; j < n ; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
