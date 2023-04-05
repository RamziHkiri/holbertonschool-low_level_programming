#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_dnodeint_end -add a note at the end of a linked list
 * @head: poiter to a linked list
 * @n: string that we will add
 * Return: the pointer to the new head of list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nlist, *strd;

		strd = malloc(sizeof(dlistint_t));
		if (!strd)
			return (NULL);

		strd->n = n;
		strd->next = NULL;
		if (*head == NULL)
		{
			strd->prev = NULL;
			*head = strd;
			return (*head);
		}
		else
		{
		nlist = *head;
		while (nlist->next)
		{
			nlist = nlist->next;
		}
		strd->prev = nlist;
		nlist->next = strd;
		return (nlist);
		}
}
