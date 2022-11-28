#include "lists.h"

/**
*insert_nodeint_at_index - a program that inserts
*a new node at a given position
*@n: integer
*@head: head
*@idx: index
*Return: address of a new node, otherwise NULL if its fails
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *put;
	listint_t *g;

	g = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && g != NULL; x++)
		{
			g = g->next;
		}
	}
	if (g == NULL && idx != 0)
		return (NULL);
	put = malloc(sizeof(listint_t));
	if (put == NULL)
		return (NULL);
	put->n = n;
	if (idx == 0)
	{
		put->next = *head;
		*head = put;
	}
	else
	{
		put->next = g->next;
		g->next = put;
	}
	return (put);
}
