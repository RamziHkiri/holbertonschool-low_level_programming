#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free dog
 * @d:dog to be freed
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
