#include "main.h"

/**
*_puts_recursion - a program that prints a string, followed by a new line
*@s: string to be printed
*Return: void
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
