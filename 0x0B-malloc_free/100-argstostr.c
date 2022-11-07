#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*argstostr - a program that concatenates all the arguments of your program
*@ac: count of argument
*@av: pointer to a string of pointers
*Return: newly allocated memory's address
*/
char *argstostr(int ac, char **av)
{
	char *put, *m;
	int q, r, s, bin = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
		m = av[q];
		r = 0;
		while (m[r++])
			bin++;
		bin++;
	}
	put = (char *)malloc(sizeof(char) * (bin + 1));
	if (put == NULL)
		return (NULL);
	for (q = 0, r = 0; q < ac && r < bin; q++)
	{
		m = av[q];
		s = 0;
		while (m[s])
		{
			put[r] = m[s];
			s++;
			r++;
		}
		put[r++] = '\n';
	}
	put[r] = '\0';

	return (put);
}
