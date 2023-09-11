#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the newly created dog_t struct.
 *         NULL if memory allocation fails or if name or owner is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = NULL;
	int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	d->name = malloc(sizeof(char) * (i + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
		;
	d->owner = malloc(sizeof(char) * (j + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
	{
		d->owner[j] = owner[j];
	}
	d->owner[j] = '\0';
	d->age = age;
	return (d);
}
