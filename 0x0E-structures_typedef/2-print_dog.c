#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print the properties of the dog.
 * @d: the dog we want to print.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nothing\n");
		exit(-1);
	}

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %d\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %d\n", d->owner);
}
