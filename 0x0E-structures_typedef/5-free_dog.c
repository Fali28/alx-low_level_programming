#include "dog.h"
#include <stdlib.h>

/**
*free_dog - a program that frees dog
*@d: pointer
*Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
