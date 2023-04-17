#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that gets a length of string
 * @str: the string to get the length
 * Return: length of string
 */

int _strlen(const char *str)
{
	int length = 0;
	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - a function that returns @dest with a copy of a string from @src
 * @src: string to copy
 * @dest: destination of string
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i]; i++)
	dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 * Return: struct pointer dog
 * Nothing if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	if (!name || age < 0 || !owner)
		return (0);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == 0)
		return (0);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == 0)
	{
		free(dog);
		return (0);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == 0)
	{
		free(dog->name);
		free(dog);
		return (0);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
