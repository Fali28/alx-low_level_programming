#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strpbrk - a program that that searches a string for any of a set of bytes
*@accept: match one of the bytes, if not,@NULL
*@s: first place for string to occur
*Return: NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int m;
		while (*s)
		{
			for (m = 0; accept[m]; m++)
			{
				if (*s == accept[m])
					return (s);
			}
			s++;
		}
		return (NULL);
}
