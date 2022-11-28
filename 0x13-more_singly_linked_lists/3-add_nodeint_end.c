#include "lists.h"

/**
*add_nodeint_end - a program that adds a new node
*at the end of a listint_t list
*@n: element
*@head: head
*Return: address of a new element, otherwise NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *put;
	listint_t *user;

	(void)user;

	put = malloc(sizeof(listint_t));

	if (put == NULL)
		return (NULL);
	put->n = n;
	put->next = NULL;
	user = *head;
	if (*head == NULL)
	{
		*head = put;
	}
	else
	{
		while (user->next != NULL)
		{
			user = user->next;
		}
		user->next = put;
	}
	return (*head);
}
