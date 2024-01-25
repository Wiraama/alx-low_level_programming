#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - main entry point
 * @d: struct details
 * @name: name to the dog
 * @owner: person owning
 * @age: old of dog
 *
 * Return: to main
 */

void print_dog(struct dog *d)

{
	if (d == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("Name is: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age is: %f\n", d->age);
	printf("Owner of the dog is: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}