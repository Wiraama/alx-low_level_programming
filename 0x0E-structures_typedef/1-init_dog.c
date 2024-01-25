#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - main entry point
 * @d: passes stuct to main
 * @name: name of the dog
 * @age: integer to show old of dog
 * @owner: the person owning dog
 *
 * Return: to main
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
