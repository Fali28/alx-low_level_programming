#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*_print - a program that moves a string from one
*place to the left and prints the string
*@l: string to be moved
*@str: string's size
*Return: void
*/
void _print(char *str, int l)
{
	int p, q;

	p = q = 0;
	while (p < l)
	{
		if (str[p] != '0')
			q = 1;
		if (q || p == l - 1)
			_putchar(str[p]);
		p++;
	}
	_putchar('\n');
	free(str);
}

/**
*mul - a program that multiplies a character with a string and
*places the answer into dest
*@num: string to be multiplied
*@num_index: last non NULL index of num
*@dest_index: highest index for addition to be started
*@n: character for multiplication
*@dest: multiplication's destination
*Return: pointer to dest, or NULL on failure
*/
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int g, i, mul, mulpro, sum, sumpro;

	mulpro = sumpro = 0;
	for (g = num_index, i = dest_index; g >= 0; g--, i--)
	{
		mul = (n - '0') * (num[g] - '0') + mulpro;
		mulpro = mul / 10;
		sum = (dest[i] - '0') + (mul % 10) + sumpro;
		sumpro = sum / 10;
		dest[i] = sum % 10 + '0';
	}
	for (sumpro += mulpro; i >= 0 && sumpro; i--)
	{
		sum = (dest[i] - '0') + sumpro;
		sumpro = sum / 10;
		dest[i] = sum % 10 + '0';
	}
	if (sumpro)
	{
		return (NULL);
	}
	return (dest);
}

/**
*check_digits - a program that checks the arguments to ensure they are digits
*@av: point to arguments
*Return: 0 if digits, otherwise 1
*/
int check_digits(char **av)
{
	int g, h;

	for (g = 1; g < 3; g++)
	{
		for (h = 0; av[g][h]; h++)
		{
			if (av[g][h] < '0' || av[g][h] > '9')
				return (1);
		}
	}
	return (0);
}

/**
*_init - a program that initializes a string
*@n: length of string
*@str: string to be intialized
*Return: void
*/
void _init(char *str, int n)
{
	int g;

	for (g = 0; g < n; g++)
		str[g] = '0';
	str[g] = '\0';
}

/**
*main - a program that multiplies two numbers
*@argv: argument vector
*@argc: argument count
*Return: 0, or exit status of 98 if it fails
*/
int main(int argc, char *argv[])
{
	int bin1, bin2, binm, xy, y;
	char *p;
	char *q;
	char g[] = "Error\n";

	if (argc != 3 || check_digits(argv))
	{
		for (xy = 0; g[xy]; xy++)
			_putchar(g[xy]);
		exit(98);
	}
	for (bin1 = 0; argv[1][bin1]; bin1++)
		;
	for (bin2 = 0; argv[2][bin2]; bin2++)
		;
	binm =  bin1 + bin2 + 1;
	p = malloc(binm * sizeof(char));
	if (p == NULL)
	{
		for (xy = 0; g[xy]; xy++)
			_putchar(g[xy]);
		exit(98);
	}
	_init(p, binm - 1);
	for (xy = bin2 - 1, y = 0; xy >= 0; xy--, y++)
	{
		q = mul(argv[2][xy], argv[1], bin1 - 1, p, (binm - 2) - y);
		if (q == NULL)
		{
			for (xy = 0; g[xy]; xy++)
				_putchar(g[xy]);
			free(p);
			exit(98);
		}
	}
	_print(p, binm - 1);
	return (0);
}
