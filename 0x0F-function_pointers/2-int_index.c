#include "function_pointers.h"

/**
*int_index - a program that searches for an integer
*@cmp: pointer to the function to be used to compare values
*@size: number of elements in the array
*@array: input
*Return:index of the first element for which the cmp function does
*not return 0 If no element matches, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (m = 0; m < size; m++)
			if (cmp(array[m]))
				return (m);
	}
	return (-1);
}
