#include "main.h"

/**
*_isalpha -checking for char alphabet
*@c: the char for checking
*
*Return: 1 if char is letter lower or rupper, otherwiser 0
*/

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
