#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * init_dog - initialize a dog structure
 * @d: the dog to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner:the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
