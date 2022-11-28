#include "lists.h"

/**
*get_nodeint_at_index - a program that returns the nth
*node of a listint_t linked list
*@index: index
*@head: head
*Return: nth node, otherwise return NULL in the absence of node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
	{
		head = head->next;
	}
	return (head);
}
