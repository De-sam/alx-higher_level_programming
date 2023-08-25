#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints elements present in the list_t list.
 * @h: This is the list_t list.
 *
 * Return: The total number nodes_count present in h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
