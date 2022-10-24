#include "main.h"

/**
*_atoi - a program that convert a string to an integer
*@s: pointer to be converted
*Return: An integer
*/
int _atoi(char *s)
{
	int g = 0;
	unsigned int xy = 0;
	int zyx = 1;
	int ysy = 0;

	while (s[g])
	{
		if (s[g] == 45)
		{
			zyx *= -1;
		}
		while (s[g] >= 48 && s[g] <= 57)
		{
			ysy = 1;
			xy = (xy * 10) + (s[g] - '0');
			g++;
		}
		if (ysy == 1)
		{
			break;
		}
		g++;
	}
	xy *= zyx;
	return (xy);
}
