#include<stdio.h>
#include "main.h"
/**
 *print_to_98 - print all number from n to 98
 *Return: serie of numbers
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("98\n");
		return;
	}

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
}
