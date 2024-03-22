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
		printf();
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
		printf("(nil)");

}
