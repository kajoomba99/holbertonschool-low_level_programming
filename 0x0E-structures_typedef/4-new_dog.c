#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 * @s: String.
 * Return: always the longitude of @s.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * _strcpy - copies the string pointed to by src.
 * @dest: destino.
 * @src: reference.
 * Return:  the copy of the string given.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
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
	char *new_name;
	char *new_owner;
	int ln, lo;

	ln = _strlen(name);
	lo = _strlen(owner);

	new_name = malloc(ln + 1);

	if (new_name == NULL)
		return (NULL);

	new_owner = malloc(lo + 1);

	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	chloe = malloc(sizeof(struct dog));

	if (chloe == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	_strcpy(new_name, name);
	_strcpy(new_owner, owner);

	chloe->name = new_name;
	chloe->age = age;
	chloe->owner = new_owner;

	return (chloe);
}
