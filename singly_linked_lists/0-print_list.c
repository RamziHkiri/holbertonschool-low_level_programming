#include <stdio.h>
#include "lists.h"
/**
 * print_list - printing a linked list content
 * @h:linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	nodes++;
	h = h->next;
	}
	return (nodes);
}
