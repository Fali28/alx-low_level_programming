#include "function_pointers.h"

/**
*array_iterator - a program that executes a function given as
*a parameter on each element of an array
*@size: array's size
*@array: array for execution of function
*@action: pointer
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array && action)
		for (m = 0; m < size; m++)
			action(array[m]);
}
