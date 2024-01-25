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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
