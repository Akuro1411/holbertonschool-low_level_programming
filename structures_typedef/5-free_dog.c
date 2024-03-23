#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - frees all allocated memory for every member
 * @d: - pointer for new variable
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->owner)
		free(d->owner);
	if (d->name)
		free(d->name);
	free(d);
}
