#include <stddef.h>
#include "main.h"
/**
 *swap_int - swaps the value of two integers
 *@a: pointer a
 *@b: pointer b
 *Return: value of a into b and value of b into
 */
void swap_int(int *a, int *b)
{
	int ab;

	ab = *b;
	*b = *a;
	*a = ab;
}
