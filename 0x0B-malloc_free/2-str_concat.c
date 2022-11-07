#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*str_concat - a program that concatenates two strings
*@s1: first string character
*@s2: second string character
*Return: address of the newly allocated memory
*/
char *str_concat(char *s1, char *s2)
{
	int m, n, bin1, bin2, bin;
	char *paste;

	bin1 = bin2 = 0;
	if (s1 != NULL)
	{
		m = 0;
		while (s1[m++] != '\0')
			bin1++;
	}
	if (s2 != NULL)
	{
		m = 0;
		while (s2[m++] != '\0')
			bin2++;
	}
	bin = bin1 + bin2;
	paste = (char *)malloc(sizeof(char) * (bin + 1));
	if (paste == NULL)
		return (NULL);
	for (m = 0; m < bin1; m++)
		paste[m] = s1[m];
	for (n = 0; n < bin2; n++, m++)
		paste[m] = s2[n];
	paste[bin] = '\0';

	return (paste);
}
