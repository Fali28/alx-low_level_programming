#include "lists.h"

/**
*delete_nodeint_at_index - a program that deletes the node at
*index index of a listint_t linked list
*@head: head
*@index: index
*Return: succeeded 1, otherwise -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *libs, *next;

	libs = *head;
	if (index != 0)
	{
		for (x = 0; x < index - 1 && libs != NULL; x++)
		{
			libs = libs->next;
		}
	}
	if (libs == NULL || (libs->next == NULL && index != 0))
	{
		return (-1);
	}
	next = libs->next;
	if (index != 0)
	{
		libs->next = next->next;
		free(next);
	}
	else
	{
		free(libs);
		*head = next;
	}
	return (1);
}
