#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"
/**
 * main -
 * @argc:
 * @argv:
 * Return:
 */
int main(int argc, char *argv[])
{
	int res, a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if ((op == '%' && num2 == 0) || (op == '/' && num2 = 0))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(op)(a,b);
	printf("%d\n",res);
	return(0);

}
