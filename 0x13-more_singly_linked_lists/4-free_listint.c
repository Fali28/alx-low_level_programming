#include "lists.h"

/**
*free_listint - a programs that frees a listint_t list
*@head: head
*Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *user;

	while ((user = head) != NULL)
	{
		head = head->next;
		free(user);
	}
}
