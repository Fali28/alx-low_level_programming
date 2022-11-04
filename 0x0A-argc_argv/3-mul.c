#include <stdio.h>
#include <stdlib.h>

/**
*main - a program that multiples two numbers
*@argv: argument
*@argc: argument count
*Return: nothing
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
