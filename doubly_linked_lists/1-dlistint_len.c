#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - printing a linked list content
 * @h:doubly linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
