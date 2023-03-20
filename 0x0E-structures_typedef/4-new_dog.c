#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to buffer of datatype dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *n_dog;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(nlen * sizeof(char) + 1);
	if (n_dog->name == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';
	n_dog->age = age;

	n_dog->owner = malloc(olen * sizeof(char) + 1);
	if (n_dog->owner == NULL)
		return (NULL);
	for (i = 0; i < olen; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';
	return (n_dog);
}
