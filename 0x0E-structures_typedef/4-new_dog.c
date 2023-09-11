#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - Duplicates a string using dynamic memory allocation
 * @str: The string to be duplicated
 *
 * Return: A pointer to the newly duplicated string.
 *         NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;


	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';
	return (duplicate);
}
/**
 * new_dog - Creates a new dog struct
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the newly created dog_t struct.
 *         NULL if memory allocation fails or if name or owner is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *newDog = NULL;

	if (name == NULL || owner == NULL)
		return (NULL);


	newDog = malloc(sizeof(dog_t));


	if (newDog == NULL)
		return (NULL);


	newDog->name = _strdup(name);
	newDog->owner = _strdup(owner);
	newDog->age = age;
	
	return (newDog);
}
