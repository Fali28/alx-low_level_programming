#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - a program that concatenates two strings
*@s1: first character
*@s2: second character
*@n: interger that has been unsigned
*Return: pointer to resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int x = 0, y = 0, bin1 = 0, bin2 = 0;

	while (s1 && s1[bin1])
		bin1++;
	while (s2 && s2[bin2])
		bin2++;
	if (n < bin2)
		m = malloc(sizeof(char) * (bin1 + n + 1));
	else
		m = malloc(sizeof(char) * (bin1 + bin2 + 1));
	if (!m)
		return (NULL);
	while (x < bin1)
	{
		m[x] = s1[x];
		x++;
	}
	while (n < bin2 && x < (bin1 + n))
		m[x++] = s2[y++];
	while (n >= bin2 && x < (bin1 + bin2))
		m[x++] = s2[y++];
	m[x] = '\0';
	return (m);
}
