#include "main.h"
#include <stdio.h>

/**
*print_diagsums - a program that prints the sum of the two
*diagonals of a square matrix of integers
*@size: maztrix's column's width
*@a: beginning of matrix
*Return: void
*/
void print_diagsums(int *a, int size)
{
	int m, s, o, p = 0, q = 0;

	for (m = 0; m < size; m++)
	{
		o = (m * size) + m;
		p += *(a + o);
	}
	for (s = 0; s < size; s++)
	{
		o = (s * size) + (size - 1 - s);
		q += *(a + o);
	}
	printf("%i, %i\n", p, q);
}
