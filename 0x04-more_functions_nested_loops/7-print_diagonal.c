#include "main.h"

/**
*print_diagonal - Writing a function that draws a diagonal line on the terminal
*@n: number to be times character should to be printed
*Return: void
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
