#include "main.h"

/**
*rev_string - a program that reverses a string
*@s: string for checking
*Return: Always 0.
*/
void rev_string(char *s)
{
	int x = 0, y, z;
	char w;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		w = s[y];
		s[y] = s[z];
		s[z] = w;
	}
}
