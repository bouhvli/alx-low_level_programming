#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - count the number of bytes in the string
 * @s: the string
 *
 * Return: the number of bytes.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
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
	int i = 0;
	char *owner_copy;
	char *name_copy;
	struct dog *n_dog;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		return (NULL);
	}
	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	name_copy = name;

	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(n_dog);
		return (NULL);
	}
	owner_copy = owner;
	while (name != '\0')
	{
		n_dog->name[i] = name_copy[i];
		i++;
	}
	i = 0;
	n_dog->age = age;
	while (owner_copy != '\0')
	{
		n_dog->owner[i] = owner_copy[i];
		i++;
	}
	return (n_dog);

}
