#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to a struct dog to be initialized
 * @name: Name of the dog (a string)
 * @age: Age of the dog (a float)
 * @owner: Owner of the dog (a string)
 *
 * Description: This function initializes the members of the struct dog pointed
 * to by 'd' with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
