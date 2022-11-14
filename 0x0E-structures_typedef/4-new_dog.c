#include "dog.h"
#include <stdlib.h>

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
	dog_t *newdoge;

	while (name[m] != '\0')
		m++;
	while (owner[n] != '\0')
		n++;
	newdoge = malloc(sizeof(dog_t));
	if (newdoge == NULL)
	{
		free(newdoge);
		return (NULL);
	}
	newdoge->name = malloc(m * sizeof(newdoge->name));
	if (newdoge->name == NULL)
	{
		free(newdoge->name);
		free(newdoge);
		return (NULL);
	}
	for (o = 0; o <= m; o++)
		newdoge->name[o] = name[o];
	newdoge->age = age;
	newdoge->owner = malloc(n * sizeof(newdoge->owner));
	if (newdoge->owner == NULL)
	{
		free(newdoge->owner);
		free(newdoge->name);
		free(newdoge);
		return (NULL);
	}
	for (o = 0; o <= n; o++)
		newdoge->owner[o] = owner[o];
		return (newdoge);
}
