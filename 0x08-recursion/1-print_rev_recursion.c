#include "main.h"

/**
*_print_rev_recursion - a program that prints a string in reverse
*@s: string to be reversely printed
*Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
