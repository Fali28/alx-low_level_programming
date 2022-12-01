#include "main.h"

/**
*clear_bit - a program that
*@index: index of the bit
*@n: pointer of an unsigned long int
*Return: 1 if it works, otherwise 1 if it doesn't
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = ~(1 << index);
	*n = *n & x;

	return (1);
}
