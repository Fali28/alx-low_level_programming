#include "lists.h"

/**
*add_node_end - a program that adds a new node at the end of a list_t list
*@str: string
*@head: head
*Return: integer
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *latest, *puts;
	size_t x;

	latest = malloc(sizeof(list_t));
	if (latest == NULL)
		return (NULL);
	latest->str = strdup(str);
	for (x = 0; str[x]; x++)
		;
	latest->len = x;
	latest->next = NULL;
	puts = *head;

	if (puts == NULL)
	{
		*head = latest;
	}
	else
	{
		while (puts->next != NULL)
			puts = puts->next;
		puts->next = latest;
	}
	return (*head);
}
