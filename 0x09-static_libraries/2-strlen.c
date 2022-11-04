#include "main.h"

/**
*_strlen - function that returns the length of a string
*@s: character for checking
*Return: Always 0.
*/
int _strlen(char *s)
{
	int b = 0;

	for (; *s++;)
		b++;
	return (b);
}
