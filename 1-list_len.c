#include "lists.h"

/**
 * list_len - Looks for  the total number of counts present in
 *            a linked list_t list.
 * @h: This is the linked list_t list.
 *
 * Return: The total counts present in h.
 */

size_t list_len(const list_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		counts++;
		h = h->next;
	}

	return (counts);
}

