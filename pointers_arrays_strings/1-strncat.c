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
	int i, j, k;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (j = 0 ; src[j] != '\0' ; j++)
		;
	for (k = 0 ; k < n && k <= j ; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
