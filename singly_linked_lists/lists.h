#ifndef LISTS_H
#define LISTS_H
/**
 * struct list - singly linked list of strings
 * @str:string
 * @len:length of the string
 * @next: next node
 */

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;
size_t print_list(const list_t *h);
#endif
