#include "lists.h"

/**
*pop_listint - a program that deletes the head node of a listint_t
*linked list, and returns the head node’s data (n)
*@head: head
*Return: data of head node
*/
int pop_listint(listint_t **head)
{
	int temps;
	listint_t *g;
	listint_t *bins;

	if (*head == NULL)
		return (0);
	bins = *head;
	temps = bins->n;
	g = bins->next;
	free(bins);
	*head = g;
	return (temps);
}
