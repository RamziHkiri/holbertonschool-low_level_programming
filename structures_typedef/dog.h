#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data structure for dog
 * @name:the name of the dog
 * @age:the age of the dog
 * @owner:the owner ofthe dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
