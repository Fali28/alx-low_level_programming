#include "main.h"

/**
*_strcpy - a program thatcopies the string pointed to by src, including
*the terminating null byte (\0), to the buffer pointed to by dest
*@src: character for checking
*@dest:character for checking
*Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
	int f;

	for (f = 0; src[f] != '\0'; f++)
		dest[f] = src[f];
	dest[f] = '\0';
	return (dest);
}
