#include "main.h"
/**
 * _strncpy - copy n letters from string
 * @n:number of letters to copy
 * @dest: string destination
 * @src: string to copy from
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0 ; src[j] != '\0' ; j++)
		;
	for (i = 0 ; i < n ; i++)
	{
		if (i < j)
		{
			dest[i] = src[i];
		}
		else
		{
			 dest[i] = 0x00;
		}
	}
	return (dest);
}
