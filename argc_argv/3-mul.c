#include<stdlib.h>
#include<stdio.h>
/**
 * main - multiplies two numbers
 * @argc:arguments numbers
 * @argv:array of arguments
 * Return:0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("error\n");
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}

