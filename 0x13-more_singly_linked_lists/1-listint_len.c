#include "lists.h"

/**
*listint_len - a program that returns the number of elements
*in a linked listint_t list
*@h: head
*Return: integer
*/
size_t listint_len(const listint_t *h)
{
	size_t latest = 0;

	while (h != NULL)
	{
		h = h->next;
		latest++;
	}
	return (latest);
}
