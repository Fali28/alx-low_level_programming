#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - a program that returns a pointer to a newly allocated
*space in memory, which contains a copy of the string given as a parameter.
*@str: string
*Return: address of the newly allocated memory
*/
char *_strdup(char *str)
{
	char *bin;
	int x, root = 0;

	if (str == NULL)
		return (NULL);
	while (str[root] != '\0')
		root++;
	bin = (char *)malloc((sizeof(char) * root) + 1);
	if (bin == NULL)
		return (NULL);
	for (x = 0; x < root; x++)
		bin[x] = str[x];
	bin[root] = '\0';

	return (bin);
}
