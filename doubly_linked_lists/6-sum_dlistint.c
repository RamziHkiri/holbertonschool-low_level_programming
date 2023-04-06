#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_dlistint - calculate the sum of all the nodes
 * @head:doubly linked list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	 int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
