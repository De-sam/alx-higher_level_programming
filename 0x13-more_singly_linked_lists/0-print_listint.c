#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints ou  all the elements of the listint_t list.
 * @h: This is a pointer to the head of the list_t list.
 *
 * Return: Total number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
