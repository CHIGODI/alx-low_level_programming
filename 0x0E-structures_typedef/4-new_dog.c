#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function to find length of string
 * *s: string to be used
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
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

	d->name = malloc(sizeof(char) * (_strlen(name)) + 1);
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_strlen(owner)) + 1);
	if (d->owner == NULL)
	{
		free(d->owner);
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
