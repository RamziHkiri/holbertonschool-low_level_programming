#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - get the bit at the index given
 * @n:long int
 * @index:the index to return
 * Return:the bite to find
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
	n = n >> index;
	return (1 & n);
	}
}
