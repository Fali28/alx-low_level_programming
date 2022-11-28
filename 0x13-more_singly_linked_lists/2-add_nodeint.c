#include "lists.h"

/**
*add_nodeint - a program that adds a new node at the beginning
*of a listint_t list
*@n: element
*@head: head
*Return: address of  a new element, otherwise NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *put;

	put = malloc(sizeof(listint_t));

	if (put == NULL)
		return (NULL);
	put->n = n;
	put->next = *head;
	*head = put;

	return (*head);
}
