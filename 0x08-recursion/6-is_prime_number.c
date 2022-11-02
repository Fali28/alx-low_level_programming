#include "main.h"

/**
*checker - checking prime number
*@x: first integer
*@y: integer
*Return: integer
*/
int checker(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (checker(x + 1, y));
}

/**
*is_prime_number - a program that tells if an integer number is prime
*@n:i ntput number
*Return: integer
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}
