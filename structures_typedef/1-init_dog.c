#include "dog.h"
/**
 * main - check the code
 *
 * 
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return ;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
