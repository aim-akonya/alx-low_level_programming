#include "dog.h"

/**
* new_dog - create a new instance of dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer address to the new dog, NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *d_name, *d_owner;

	d_name = malloc(sizeof(name));
	d_owner = malloc(sizeof(owner));
	if (d_name == NULL || d_owner == NULL)
	{
		return (NULL);
	}

	d_name = name;
	d_owner = owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(d_name);
		free(d_owner);
		return (NULL);
	}
	dog->name = d_name;
	dog->age = age;
	dog->owner = d_owner;

	return (dog);
}
