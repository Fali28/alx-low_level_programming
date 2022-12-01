#include "main.h"

/**
*get_bit - a program that returns the value of a bit at a given index
*@index: index of the bit
*@n: unsigned long int input
*Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, bin;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	bin = n & div;
	if (bin == div)
		return (1);
	return (0);
}
