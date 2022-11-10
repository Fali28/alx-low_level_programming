#include "main.h"

/**
*_realloc - a program that reallocates a memory block using
*malloc and free
*@old_size: size of allocated space
*@new_size: new memory block
*@ptr: pointer to allocated memory previously
*Return: new memory size allocation by pointer or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *user;
	char *bin;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	user = malloc(new_size);
	if (!user)
		return (NULL);
	bin = ptr;
	if (new_size < old_size)
	{
		for (m = 0; m < new_size; m++)
			user[m] = bin[m];
	}
	if (new_size > old_size)
	{
		for (m = 0; m < old_size; m++)
			user[m] = bin[m];
	}
	free(ptr);
	return (user);
}
