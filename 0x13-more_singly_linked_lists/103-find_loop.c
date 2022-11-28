#include "lists.h"

/**
*find_listint_loop - a program that finds the loop in a linked list
*@head: head
*Return: address of the node where it starts
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *is, *bins;

	is = head;
	bins = head;
	while (head && is && is->next)
	{
		head = head->next;
		is = is->next->next;

		if (head == is)
		{
			head = bins;
			bins = is;
			while (1)
			{
				is = bins;
				while (is->next != head && is->next != bins)
				{
					is = is->next;
				}
				if (is->next == head)
					break;

				head = head->next;
			}
			return (is->next);
		}
	}
	return (NULL);
}
