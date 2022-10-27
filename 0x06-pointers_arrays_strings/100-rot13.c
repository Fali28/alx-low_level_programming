#include "main.h"

/**
*rot13 - a program that encodes a string using rot13
*@s: string for encoding
*Return: address of s
*/
char *rot13(char *s)
{
	int k;
	int l;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; *(s + k); k++)
	{
		for (l = 0; l < 52; l++)
		{
			if (rot1[l] == *(s + k))
			{
				*(s + k) = rot2[l];
				break;
			}
		}
	}
	return (s);
}
