#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: of the dog.
 * @age: of the dog.
 * @owner: of the dog.
 *
 * Return: null if n_dog is null, and the pointer to the
 * new dog :-) if the everything is okee.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *n_dog;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog != NULL)
	{
		if (name > 0)
		{
			n_dog->name = name;
		}
		else
			return (NULL);
		
		n_dog->age = age;
		n_dog->owner = owner;
		return (n_dog);
	}
	else
		return (NULL);
}
