#include "main.h"

/**
*swap_int - function that swaps the values of two integers
*@a: Integer 1
*@b: Integer 2
*Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
