#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that generates random valid passwords
*for the program 101-crackme
*Return: Always 0.
*/
int main(void)
{
	int sum;
	char x;

	srand(time(NULL));
	while (sum <= 2645)
	{
		x = rand() % 128;
		sum += x;
		putchar(x);
	}
	putchar(2772 - sum);
	return (0);
}
