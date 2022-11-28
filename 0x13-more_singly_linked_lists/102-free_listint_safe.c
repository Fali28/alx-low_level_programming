#include "lists.h"

/**
*free_listp2 - a program that frees a listint_t list
*@head: head
*Return: nothing
*/
void free_listp2(listp_t **head)
{
	listp_t *puts, *libs;

	if (head != NULL)
	{
		libs = *head;
		while ((puts = libs) != NULL)
		{
			libs = libs->next;
			free(puts);
		}
		*head = NULL;
	}
}

/**
*free_listint_safe - a program that frees a listint_t list
*@h: head
*Return: size of list that has been freed
*/
size_t free_listint_safe(listint_t **h)
{
	size_t temps = 0;
	listp_t *user, *latest, *sum;
	listint_t *libs;

	user = NULL;
	while (*h != NULL)
	{
		latest = malloc(sizeof(listp_t));
		if (latest == NULL)
			exit(98);
		latest->p = (void *)*h;
		latest->next = user;
		user = latest;

		sum = user;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&user);
				return (temps);
			}
		}
		libs = *h;
		*h = (*h)->next;
		free(libs);
		temps++;
	}
	*h = NULL;
	free_listp2(&user);
	return (temps);
}
