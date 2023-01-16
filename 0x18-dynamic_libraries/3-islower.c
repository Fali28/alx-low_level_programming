#include "main.h"

/**
*_islower - Checking if a char is lower
*@c: the char for checking
*
*Return: 1 if char letter is lower , 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
