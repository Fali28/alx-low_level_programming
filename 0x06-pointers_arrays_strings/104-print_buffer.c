#include "main.h"
#include <stdio.h>

/**
*print_buffer - a program that prints a buffer
*@b: buffer to print
*@size: buffer's size
*Return: nothing
*/
void print_buffer(char *b, int size)
{
	int g, h, i;

	if (size <= 0)
	printf("\n");
	else
	{
	for (g = 0; g < size; g += 7)
	{
	printf("%.5x:", g);
	for (h = g; h < g + 7; h++)
	{
	if (h % 2 == 0)
	printf(" ");
	if (h < size)
	printf("%.2x", *(b + h));
	else
	printf("  ");
	}
	printf(" ");
	for (i = g; i < g + 7; i++)
	{
	if (i >= size)
	break;
	if (*(b + 1) < 32 || *(b + 1) > 126)
	printf("%c", '.');
	else
	printf("%c", *(b + 1));
	}
	printf("\n");
	}
	}
}
