#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a file.
 * @d: input of dog.
 * @name: The name of  dog.
 * @age: The age of dog.
 * @owner: The owner of  dog.
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
