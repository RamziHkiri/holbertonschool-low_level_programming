#include<stdio.h>
#include"main.h"
/**
 * main - numbers from 1 to 100 with fizz replace the 3 multiples
 * and buzz for the 5 multiples
 *
 * Return: 1 .. fizz .. buzz ..
 */
int main(void)
{
	int i, dt, df;

	for (i = 1 ; i <= 100 ; i++)
	{
		dt = i % 3;
		df = i % 5;
		if (df == 0 && dt == 0)
		{
			printf("FizzBuzz ");
		}
		else if (df == 0)
		{
			printf("Buzz ");
		}
		else if (dt == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
