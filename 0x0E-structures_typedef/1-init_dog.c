#include "dog.h"

/**
 * init_dog - initialization the dogs
 * @d : struct
 * @name : name dog
 * @age : age dog
 * @owner : owner dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
