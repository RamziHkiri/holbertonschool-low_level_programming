#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node
 * @head:doubly linked list
 * @index:index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *nd1, *nd2;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (current->next == NULL)
		{
			free(current);
			*head = NULL;
			return (1);
		}
		else
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(current);
			return (1);
		}
	}
	while (current)
	{
		if (i == index - 1)
		{
			nd1 = current->next;
			current->next = nd1->next;
			if (current->next != NULL)
			{
				nd2 = nd1->next;
				nd2->prev = current;
			}
			free(nd1);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
