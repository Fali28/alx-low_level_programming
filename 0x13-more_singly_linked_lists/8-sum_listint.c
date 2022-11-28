#include "lists.h"

/**
*sum_listint - a program that returns the sum of all
*the data (n) of a listint_t linked list
*@head: head
*Return: integer
*/
int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
