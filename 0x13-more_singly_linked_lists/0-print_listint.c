#include "lists.h"

/**
*print_listint - a program that prints all elements
*@h: head
*Return: integer
*/
size_t print_listint(const listint_t *h)
{
	size_t latest = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		latest++;
	}
	return (latest);
}
