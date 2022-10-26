#include "main.h"

/**
*reverse_array - a program that reverses the content
*of an array of integers
*@a: an array of integers
*@n: the number of elements to swap
*Return: void
*/
void reverse_array(int *a, int n)
{
	int e, f;

	for (e = 0; (e < (n - 1) / 2); e++)
	{
		f = a[e];
		a[e] = a[n - 1 - e];
		a[n - 1 - e] = f;
	}
}
