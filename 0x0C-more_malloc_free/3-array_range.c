#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*array_range - a program that creates an array of integers
*@min: minimum range
*@max: maximum range
*Return: pointer to a new array
*/
int *array_range(int min, int max)
{
	int *user;
	int g, put;

	if (min > max)
		return (NULL);
	put = max - min + 1;
	user = malloc(sizeof(int) * put);
	if (user == NULL)
		return (NULL);
	for (g = 0; g < put; g++)
		user[g] = min++;
	return (user);
}
