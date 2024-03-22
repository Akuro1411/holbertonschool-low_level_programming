#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
 * print_dog - sends the value for each element
 * @d: - pointer for new variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL ||  d->owner == NULL)
		printf("(nil)");
	else
	{
		printf("Name: %c", d->name);
		printf("Age: %f", d->age);
		printf("Owner: %c", d->owner);
	}

}
