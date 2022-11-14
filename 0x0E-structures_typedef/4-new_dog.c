#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
*new_dog - a program that that creates a new dog
*@name: Poppy
*@age: 3.5
*@owner: Bob
*Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int m = 0, n = 0, o;
	dog_t *newdog;

	while (name[m] != '\0')
		m++;
	while (owner[n] != '\0')
		n++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(m * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (o = 0; o <= m; o++)
		newdog->name[o] = name[o];
	newdog->age = age;
	newdog->owner = malloc(n * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (o = 0; o <= n; o++)
		newdog->owner[o] = owner[o];
		return (newdog);
}
