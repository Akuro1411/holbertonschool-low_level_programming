#include "dog.h"
/**
 * main - check the code
 *
 * 
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
