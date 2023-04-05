#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_node_end - add a note at the end of a linked list
 * @head: head of the linked list
 * @str: string that we will add
 * Return: the pointer to the new head of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *nlist, *strd;

	if (str != NULL)
	{
		strd = malloc(sizeof(list_t));
		if (!strd)
			return (NULL);
		for (i = 0 ; str[i] != '\0' ; i++)
			;
		strd->str = strdup(str);
		strd->len = i;
		strd->next = NULL;
		if (*head == NULL)
		{
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
		nlist->next = strd;
		return (nlist);
		}
	}
	return (NULL);
}
