#include "lists.h"

/**
*free_list - a program that frees a list_t list
*@head: head
*Return: nothing
*/
void free_list(list_t *head)
{
	list_t *advanced;

	while ((advanced = head) != NULL)
	{
		head = head->next;
		free(advanced->str);
		free(advanced);
	}
}
