#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new_dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer type dogt_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *chloe;

	chloe = malloc(sizeof(struct dog));

	if (chloe == NULL)
		return (NULL);

	chloe->name = name;
	chloe->age = age;
	chloe->owner = owner;

	return (chloe);
}
