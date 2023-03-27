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
		return(1);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	res = get_op_func(op)(a,b);
	printf("%d\n",res);
	return(0);

}
