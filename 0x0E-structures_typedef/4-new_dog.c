#include "dog.h"
#include <stdio.h>

/**
 * strlength - calculate the length of the string
 * @str: string that I will calculate its length
 * Return: 1 on (success)
 */

int strlength(char *str)
{
	int i, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	len++;
	}
	return (len);
}
/**
 * strcopy - copy the string
 * @s1: first  string
 * @s2: second string
 * Return: value to be returned
 */

void strcopy(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s2[i] = s1[i];
	}
		s2[i] = '\0';
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age
 * @owner: name of the owner
 * Return: 1 on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = (char *)malloc((strlength(name) + 1) * (sizeof(char)));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = (char *)malloc((strlength(owner) + 1) * (sizeof(char)));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcopy(name, d->name);
	strcopy(owner, d->owner);
	d->age = age;
	return (d);
}
