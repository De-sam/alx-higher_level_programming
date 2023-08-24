#include "lists.h"

/**
 * list_len - Finds the number of countsin
 *            a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of counts in h.
 */

size_t list_len(const list_t *h)
{
	size_t counts= 0;

	while (h != NULL)
	{
		counts++;
		h = h->next;
	}

	return (counts);
}

