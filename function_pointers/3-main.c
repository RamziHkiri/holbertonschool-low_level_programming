#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"
/**
 * main - result of an operation between two integers
 * @argc:argumets number
 * @argv:array of arguments
 * Return:res
 */
int main(int argc, char *argv[])
{
	int res, num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if ((op[0] == '%' && num2 == 0) || (op[0] == '/' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(op)(num1, num2);
	printf("%d\n", res);
	return (0);

}
