#include "function_pointers.h"

/**
*print_name - a program that prints a name
*@f: pointer's function
*@name: input
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
