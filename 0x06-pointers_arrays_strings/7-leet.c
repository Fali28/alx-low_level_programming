#include "main.h"

/**
*leet - a program that encodes a string into 1337
*@s: string to encode
*Return: address of s
*/
char *leet(char *s)
{
	int f;
	int h;
	char I[] = "oI_ea__t";

	for (f = 0; s[f] != '\0'; f++)
	{
	for (h = 0; I[h] != '\0'; h++)
	{
	if (s[f] == I[h] || s[f] == (I[h] - 32))
	{
	s[f] = h + '0';
	}
	}
	}
	return (s);
}
