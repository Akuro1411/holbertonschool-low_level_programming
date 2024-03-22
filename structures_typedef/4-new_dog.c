#include "dog.h"
#include <stddef.h>
/**
 * init_dog - sends the value for each element
 * @d: - pointer for new variable
 * @name: - name of value
 * @age: - age of value
 * @owner: - owner of value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	new_dog->name = name;
	new_dog->owner = owner;
	if (new_dog->name == NULL || new_dog->owner == NULL)
		return (NULL);
}
