#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initlize a variable of type struct
 * struct dog - structure
 * @d: dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: 1 on (success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
