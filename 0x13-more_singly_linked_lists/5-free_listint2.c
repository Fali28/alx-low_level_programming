#include "lists.h"

/**
*free_listint2 - a program that fress a linked list
*@head: head
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *user;
	listint_t *bins;

	if (head != NULL)
	{
		bins = *head;
		while ((user = bins) != NULL)
		{
			bins = bins->next;
			free(user);
		}
		*head = NULL;
	}
}
