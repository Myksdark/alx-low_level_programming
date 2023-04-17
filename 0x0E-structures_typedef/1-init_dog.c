#include "dog.h"

/**
 * init_dog - initializes dog's struct
 * @d: input pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: input for dog owner
 * Return: null
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
