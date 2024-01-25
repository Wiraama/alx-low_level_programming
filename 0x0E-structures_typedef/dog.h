#ifndef MY_DOG_H
#define MY_DOG_H
/**
 * struct dog - entry point
 * Define a new type struct dog with the following elements
 * @name: name of the dog
 * @age: age of the fucking dog
 * @owner: name of the person owning the fucking dog
 *
 * Return: main
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

#endif
