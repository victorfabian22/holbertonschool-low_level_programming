#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL if fail, pointer to new dog if SUCCESS
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newName, *newOwner;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
	{
		free(new_dog);
		return (NULL);
	}
	if (name != NULL)
	{
		newName = malloc(sizeof(name));
		if (!newName)
		{
			free(newName);
			free(new_dog);
			return (NULL);
		}
		new_dog->name = strdup(name);
	}
	if (owner != NULL)
	{
		newOwner = malloc(sizeof(owner));
		if (!newOwner)
		{
			free(newName);
			free(newOwner);
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = strdup(owner);
	}
	if (age >= 0)
	{
		new_dog->age = age;
	}
	return (new_dog);
}
