#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
*new_dog - a program that creates a new dog
*@name: Poppy
*@age: 3.5
*@owner: Bob
*Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *newdoge;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	newdoge = malloc(sizeof(dog_t));
	if (newdoge == NULL)
	{
		free(newdoge);
		return (NULL);
	}
	newdoge->name = malloc(i * sizeof(newdoge->name));
	if (newdoge->name == NULL)
	{
		free(newdoge->name);
		free(newdoge);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		newdoge->name[k] = name[k];
	newdoge->age = age;
	newdoge->owner = malloc(j * sizeof(newdoge->owner));
	if (newdoge->owner == NULL)
	{
		free(newdoge->owner);
		free(newdoge->name);
		free(newdoge);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		newdoge->owner[k] = owner[k];
		return (newdoge);
}
