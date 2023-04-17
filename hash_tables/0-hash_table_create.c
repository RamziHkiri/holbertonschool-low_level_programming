#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size:size of the array
 * Return: pointer to the created list or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htab;
	unsigned int i;

	htab = malloc(sizeof(hash_table_t));
	if (!htab)
		return (NULL);
	htab->size = size;
	htab->array = malloc(sizeof(hash_node_t *) * size);
	if (!htab->array)
		return (NULL);
	for (i = 0 ; i < size ; i++)
	{
	htab->array[i] = NULL;
	}

	return (htab);
}
