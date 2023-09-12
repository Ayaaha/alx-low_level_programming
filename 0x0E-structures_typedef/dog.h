#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - structure named dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
