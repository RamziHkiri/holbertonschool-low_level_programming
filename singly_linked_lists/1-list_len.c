#include <stdio.h>
#include "lists.h"
/**
 * list_len - printing a linked list content
 * @h:linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
