#include "lists.h"

/**
*reverse_listint - a that reverses a listint_t linked list
*@head: head
*Return: pointer
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *header, *files;

	header = NULL;
	files = NULL;

	while (*head != NULL)
	{
		files = (*head)->next;
		(*head)->next = header;
		header = *head;
		*head = files;
	}
	*head = header;
	return (*head);
}
