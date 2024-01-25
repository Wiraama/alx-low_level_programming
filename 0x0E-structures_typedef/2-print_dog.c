#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - main entry point
 * @d: struct details
 *
 * Return: to main
 */

void print_dog(struct dog *d)

{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	/**
	printf("Name: %s\n", d->name);
	printf("Age is: %f\n", d->age);
	printf("Owner is: %s\n", d->owner);
	**/
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
