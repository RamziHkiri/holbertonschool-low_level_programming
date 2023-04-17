#include<stdio.h>
#include<stdlib.h>
#include"hash_tables.h"
/**
 * key_index - return the index of the key
 * @key:key
 * @size: size of the hash table
 * Return: index at which the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
