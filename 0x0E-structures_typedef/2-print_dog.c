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

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	if (d->age)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)");
	}
	printf("owner: %s\n", d->owner ? d->owner : "(nil)");
}
