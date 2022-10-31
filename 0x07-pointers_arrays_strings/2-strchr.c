#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strchr - a program that locates a character in a string
*@s: present in the string
*@c: where the character will occur
*Return: NULL
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
