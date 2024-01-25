#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - main entry point
 * @name: new member
 * @owner: new member
 * @age: new age
 *
 * Return: to main fuction
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	/**to ensure names are not emty**/
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	/** Allocating memory**/
	new_dog = (dog_t *)malloc(sizeof(dog_t));

	/**to check if memory is allocated**/
	if (new_dog == NULL)
	{
		return (NULL);
	}
	/**copying/duplicating of the two strings and also creating memory**/
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	new_dog->age = age;

	return (new_dog);
}
