#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_calloc - a program that allocates memory for an array
*of @nmemb elements of @size bytes each
*@size: element of size bytes
*@nmemb: memory for array
*Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *q;
	unsigned int p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	q = malloc(nmemb * size);
	if (q == NULL)
		return (NULL);
	for (p = 0; p < (nmemb * size); p++)
		q[p] = 0;
	return (q);
}
