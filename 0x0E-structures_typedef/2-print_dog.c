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

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name:%s\nAge: %f\nOwner:%s\n", d->name, d->age, d->owner);

}
