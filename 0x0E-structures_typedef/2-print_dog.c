#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"
void print_dog(struct dog *d)

{
	if (d != NULL)
	{
		printf("Name is: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age is: %f\n", d->age);
		printf("Owner of the dog is: %s\n", (d->owner !=NULL) ? d->owner : "(nil)");
	}
}
