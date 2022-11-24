#include "lists.h"

/**
*print_list - a program that prints all elements of a list_t list
*@h: name of list
*Return: nodes' number
*/
size_t print_list(const list_t *h)
{
	size_t puts;

	puts = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		puts++;
	}
	return (puts);
}
