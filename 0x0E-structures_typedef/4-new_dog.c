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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
