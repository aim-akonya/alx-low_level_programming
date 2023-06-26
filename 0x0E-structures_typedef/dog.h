#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - Dog struct
 *
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
