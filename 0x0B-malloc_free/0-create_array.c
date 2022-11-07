#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_array - a program that creates an array of chars,
*and initializes it with a specific char
*@c: the initial value
*@size: array's size
*Return: memory's address for printing
*/
char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *mArray;

	if (size == 0)
		return (NULL);

/* Returning pointer's allocated memory */
	mArray = malloc(size * sizeof(char));

	if (mArray == NULL)
		return (NULL);
	m = 0;
	while (m < size)
	{
		mArray[m] = c;
		m++;
	}
	return (mArray);
}
