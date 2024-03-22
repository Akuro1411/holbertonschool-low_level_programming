#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - sends the value for each element
 * @d: - pointer for new variable
 * @name: - name of value
 * @age: - age of value
 * @owner: - owner of value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *user;
	user = malloc(sizeof(dog_t));
	if (user == NULL)
	{
		free(user);
		return (NULL);
	}
	user->name = name;
	user->age = age;
	user->owner = owner;
	return user;
}