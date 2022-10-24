#include "main.h"
#include <stdio.h>

/**
*print_array - a program that prints n elements of an array of integers
*@n: first interger for checking
*@a: second interger for checking
*Return: Always 0.
*/
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
		if (p != n - 1)
		printf("%d, ", a[p]);
		else
			printf("%d", a[p]);
printf("\n");
}
