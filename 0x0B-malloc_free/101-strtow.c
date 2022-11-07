#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*strtow- a program that that splits a string into words
*@str: string
*Return: pointer to an array of strings (letter)
*/
char **strtow(char *str)
{
	int x, y, z = 0, s, t, user = 0, bin;
	char **letter;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			user++;
	if (user == 0)
		return (NULL);
	letter = malloc((user + 1) * sizeof(char *));
	if (letter == NULL)
	{
		free(letter);
		return (NULL);
	}
	for (x = 0; str[x] != '\0' && z < user; x++)
	{
		if (str[x] != ' ')
		{
			bin = 0;
			for (y = x; str[y] != ' ' && str[y] != '\0'; y++)
				bin++;
			letter[z] = malloc((bin + 1) * sizeof(char));
			if (letter[z] == NULL)
			{
				for (t = 0; t < z; t++)
					free(letter[z]);
				free(letter);
				return (NULL);
			}
			for (s = 0; s < bin; s++, x++)
				letter[z][s] = str[x];
			letter[z][s] = '\0', z++;
		}
	}
	letter[z] = NULL;
	return (letter);
}
