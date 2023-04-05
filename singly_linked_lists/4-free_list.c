#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - freed a linked list
 * @head: linked list
 */
void free_list(list_t *head)
{
	list_t *l;

	while (head)
	{
		l = head;
		head = head->next;
		free(l->str);
		free(l);
	}
	free(head);
}
