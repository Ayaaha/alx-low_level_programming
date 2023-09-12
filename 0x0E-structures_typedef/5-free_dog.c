#include "dog.h"
#include <stdio.h>

/**
 * free_dog - free the dog
 * @d: dog of type dog_t
 * Return: 1 on (success)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
