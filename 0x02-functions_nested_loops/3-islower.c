#include "main.h"

/**
*_islower - Checking for char alphabet
*@c: the char for checking
*
*Return: 1 if char letter is lower or upper, 0 otherwise
*/
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
