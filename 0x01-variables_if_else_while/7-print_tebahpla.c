#include <stdio.h>

/**
 * main - Printing the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
		putchar(lowercase);

	putchar('\n');

	return (0);
}
