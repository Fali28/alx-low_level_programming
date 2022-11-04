#include "main.h"

/**
*_strncat - a program that concatenates two strings
*@n: length of integer
*@src: string's source
*@dest: string's destination
*Return: pointer to the rsulting dest's string
*/
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
