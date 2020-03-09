#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print_dog
 * @d: d
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		char *name = "(nil)";
		char *owner = "(nil)";

		if (d->name != NULL)
			name = d->name;

		if (d->owner != NULL)
			owner = d->owner;

		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
