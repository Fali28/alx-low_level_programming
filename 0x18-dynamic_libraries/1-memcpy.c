#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_memcpy - a program that that copies memory area.
*@src: bytes
*@n: what to program copies
*@dest: memory area
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		dest[m] = src[m];
		m++;
	}
	return (dest);
}
