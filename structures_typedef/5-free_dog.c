#include "dog.h"
#include <stddef.h>
/**
 * print_dog - sends the value for each element
 * @d: - pointer for new variable
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
}
