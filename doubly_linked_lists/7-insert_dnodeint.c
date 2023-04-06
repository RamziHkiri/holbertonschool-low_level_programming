#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * dlistint_t *insert_dnodeint_at_index - insert a node at a given index
 * @h:linked list
 * @idx:the index where to insert our integer
 * @n:integer to be inserted
 * Return:pointer to the new doubly linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *nlist;
	unsigned int i = 0;
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = NULL;
		node->prev = NULL;
		nlist = *h;
		while (nlist && i <= idx)
		{
			if (i == idx)
			{
			node->prev = nlist->prev;
			node->next = nlist;
			nlist->prev = node;
			nlist->prev->next = node;
			return (nlist);
			}
			nlist = nlist->next;
		}
	return (NULL);
}

