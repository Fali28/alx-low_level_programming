#include "main.h"

/**
*string_toupper - a program that changes all lowercase
*letters of a string to uppercase
*@s: the string
*Return: character
*/
char *string_toupper(char *s)
{

	int h;

	h = 0;
	while (*(s + h))
	{
		if (*(s + h) >= 'a' && *(s + h) <= 'z')
			*(s + h) -= 'a' - 'A';
		h++;
	}
	return (s);
}
