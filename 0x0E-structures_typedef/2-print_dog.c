#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print a struct dog
 * @d: the dog
 */

void print_dog(struct dog *d)
{
	if (d == null)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		prinf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
