#include "lists.h"

/**
*free_listp - a program that frees linked list
*@head: head
*Return: nothing
*/
void free_listp(listp_t **head)
{
	listp_t *bins, *puts;

	if (head != NULL)
	{
		puts = *head;
		while ((bins = puts) != NULL)
		{
			puts = puts->next;
			free(bins);
		}
		*head = NULL;
	}
}

/**
* print_listint_safe - a program that prints a listint_t linked list
*@head: head
*Return: integer
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t temps = 0;
	listp_t *user, *latest, *sum;

	user = NULL;
	while (head != NULL)
	{
		latest = malloc(sizeof(listp_t));
		if (latest == NULL)
			exit(98);
		latest->p = (void *)head;
		latest->next = user;
		user = latest;
		sum = user;
		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&user);
				return (temps);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		temps++;
	}
	free_listp(&user);
	return (temps);
}
