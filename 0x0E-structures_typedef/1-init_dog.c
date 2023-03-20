#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: a variable name of type dog.
 * @name: name to be asign to the d.
 * @age: age to be // // // //.
 * @owner: owner // // // // //.
 * Description: initialize a variable of type struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

