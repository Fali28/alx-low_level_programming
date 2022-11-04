#include "main.h"

/**
*_strncpy - a program that copies a string
*@n: the integer's length
*@src: the string's source
*@dest: the string's destination
*Return: pointer to the resulting dest's string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && *(src + x); x++)
	{
	*(dest + x) = *(src + x);
	}
	for (; x < n; x++)
	{
	*(dest + x) = '\0';
	}
	return (dest);
}
