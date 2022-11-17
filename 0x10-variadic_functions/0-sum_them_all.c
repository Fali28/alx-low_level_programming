#include "variadic_functions.h"

/**
*sum_them_all - a program that returns the sum of all its parameters
*@n: parameter
*Return: integer
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int x;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
