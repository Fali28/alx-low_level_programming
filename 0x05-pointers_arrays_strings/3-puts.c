#include "main.h"

/**
*_puts - function that prints a string, followed by a new line, to stdout
*@str: string
*Return: length of string
*/
void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
