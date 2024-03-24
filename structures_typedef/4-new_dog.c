#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strcpy - copies the string
 * @dest: - pointer for the first string
 * @src: - pointer for second string
 * Return: - returns the new string
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

/**
 * _strlen - check the code
 * @s: - pointer for given string
 * Return: length of string`
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * new_dog - sends the value for each element
 * @name: - name of value
 * @age: - age of value
 * @owner: - owner of value
 * Return: - returns the name, age and owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *user;
	int len_name, len_owner;

	user = malloc(sizeof(dog_t));
	if (user == NULL)
		return (NULL);
	len_name = _strlen(name);
	len_owner = _strlen(owner);
	user->name = malloc(sizeof(char) * (len_name + 1));
	if (user->name == NULL)
	{
		free(user);
		return (NULL);
	}
	user->name = _strcpy(user->name, name);
	user->age = age;
	user->owner = malloc(sizeof(char) * (len_owner + 1));
	if (user->owner == NULL)
	{
		free(user->name);
		free(user);
		return (NULL);
	}
	user->owner = _strcpy(user->owner, owner);
	return (user);
}
