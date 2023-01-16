#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strspn - a program that gets the length of a prefix substring
*@accept: contains bytes
*@s: initial seg.
*Return: w
*/
unsigned int _strspn(char *s, char *accept)
{
	int  w = 0, u, v;

	for (u = 0; s[u] != '\0'; u++)
	{
		if (s[u] != 32)
		{
			for (v = 0; accept[v] != '\0'; v++)
			{
				if (s[u] == accept[v])
					w++;
			}
		}
		else
			return (w);
	}
		return (w);
}
