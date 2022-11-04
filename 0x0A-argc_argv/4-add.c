#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - adding positive numbers
*@argv: argument
*@argc: argument count
*Return: nothing
*/
int main(int argc, char *argv[])
{
	int k, l, sum = 0;

	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l] != '\0'; l++)
		{
			if (!isdigit(argv[k][l]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
