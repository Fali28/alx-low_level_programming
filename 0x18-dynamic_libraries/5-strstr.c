#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strstr - a program that locates a substring
*@needle: the first place where substring occurs
*@haystack: string for searching
*Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int m = 0, n = 0;

	while (haystack[m])
	{
		while (needle[n] && (haystack[m] == needle[0]))
		{
			if (haystack[m + n] == needle[n])
			n++;
			else
				break;
		}
		if (needle[n])
		{
			m++;
			n = 0;
		}
		else
			return (haystack + m);
	}
	return (0);
}
