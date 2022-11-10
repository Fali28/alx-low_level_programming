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
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
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
	int j, k, mul, mulpro, sum, sumpro;

	mulpro = sumpro = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulpro;
		mulpro = mul / 10;
		sum = (dest[k] - '0') + (mul % 10) + sumpro;
		sumpro = sum / 10;
		dest[k] = sum % 10 + '0';
	}
	for (sumpro += mulpro; k >= 0 && sumpro; k--)
	{
		sum = (dest[k] - '0') + sumpro;
		sumpro = sum / 10;
		dest[k] = sum % 10 + '0';
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
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
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
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_digits(argv))
	{
		for (xy = 0; e[xy]; xy++)
			_putchar(e[xy]);
		exit(98);
	}
	for (bin1 = 0; argv[1][bin1]; bin1++)
		;
	for (bin2 = 0; argv[2][bin2]; bin2++)
		;
	binm =  bin1 + bin2 + 1;
	a = malloc(binm * sizeof(char));
	if (a == NULL)
	{
		for (xy = 0; e[xy]; xy++)
			_putchar(e[xy]);
		exit(98);
	}
	_init(a, binm - 1);
	for (xy = bin2 - 1, y = 0; xy >= 0; xy--, y++)
	{
		t = mul(argv[2][xy], argv[1], bin1 - 1, a, (binm - 2) - y);
		if (t == NULL)
		{
			for (xy = 0; e[xy]; xy++)
				_putchar(e[xy]);
			free(a);
			exit(98);
		}
	}
	_print(a, binm - 1);
	return (0);
}
