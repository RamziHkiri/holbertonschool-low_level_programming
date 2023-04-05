#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint - add a node into the beginning of a doubly linked list
 * @head:pointer to the linked list
 * @n:the number that we will add into our liste
 * Return: the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *strd;

	strd = malloc(sizeof(dlistint_t));
	if (!strd)
		return (NULL);
	strd->n = n;
	strd->prev = NULL;
	strd->next = NULL;
	if (*head)
	{
		strd->next = *head;
		(*head)->prev = strd;
		*head = strd;
	return (*head);
	}
	else
	{	*head = strd;
		return (*head);
	}
}
