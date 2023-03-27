#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"
/**
 * op_add - sum of two integers
 * @a:integer
 * @b:integer
 * Return:sum
 */
int op_add(int a, int b)
{
	return(a + b);
}
/**
 * op_sub - difference between a and b
 * @a:integer
 * @b:integer
 * Return:difference
 */
int op_sub(int a, int b)
{
	if  (a > b)
		return (a-b);
	else
		return (b-a);
}
/**
 * op_mul - product of a and b
 * @a:integer
 * @b:integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the devision of a by b
 * @a:integer
 * @b:integer
 * Return: a div b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the devision of a by b
 * @a:integer
 * @b:integer
 * Return:a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
