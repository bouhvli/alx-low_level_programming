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
		return;
	}
	else
	{
		printf("Name: %s\n", d->name == NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner == NULL ? d->owner : "(nil)");
	}
}
