#include "main.h"

/**
*checker - checking natural square root of a number
*@x: first integer
*@y: integer
*Return: integer
*/
int checker(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (checker(x + 1, y));
}

/**
*_sqrt_recursion - a program that returns natural square root of a number
*@n: input number
*Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (checker(1, n));
}
