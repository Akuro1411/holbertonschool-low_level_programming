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
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *user;
        user = malloc(sizeof(dog_t));
        if (user == NULL)
        {
                free(user);
		free(name);
		free(owner);
                return (NULL);
        }
        if (name == NULL)
        {
                free(user);
                free(owner);
                return (NULL);
        }
        if (owner == NULL)
        {
                free(user);
                free(name);
                return (NULL);
        }
        user->age = age;
	user->name = name;
	user->owner = owner;
        return user;
}
