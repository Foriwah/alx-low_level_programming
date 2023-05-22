#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize the variable
 * @d: The dog you are initialize
 * @name: name of dog
 * @age: age of the dog
 * @owner: the owner of the dog
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
