#include"main.h"
/**
 * leet - 1337 encodes
 * @x:string
 * Return: x
 */
char *leet(char *x)
{
	int i, j;
	char tab1[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char tab2[] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};

	for (i = 0 ; x[i] != '\0' ; i++)
	{
	for (j = 0 ; j < 10 ; j++)
		if (x[i] == tab2[j])
		{
			x[i] = tab1[j];
		}
	}
return (x);
}
