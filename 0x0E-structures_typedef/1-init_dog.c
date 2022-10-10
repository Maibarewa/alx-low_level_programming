#include "dog.h"

/**
 * imit_dog - initializes a variable dog
 * @d: Struct dog.
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 *
 * Return: no return
 */
 void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
