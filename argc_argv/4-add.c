#include<stdlib.h>
#include<stdio.h>
/**
 * main -
 * @argc:arguments number
 * @argv: array of argumments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (j = 1 ; j < argc ; j++)
	{
		if (!(atoi(argv[j])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[j]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
