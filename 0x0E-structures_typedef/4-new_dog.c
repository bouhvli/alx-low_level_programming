#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: of the dog.
 * @age: of the dog.
 * @owner: of the dog.
 * Return: null if n_dog is null, and the pointer to the
 * new dog :-) if the everything is okee.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *owner_copy;
	char *name_copy;
	struct dog *n_dog;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		return (NULL);
	}
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	strcpy(owner_copy, owner)
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	return (n_dog);

}
