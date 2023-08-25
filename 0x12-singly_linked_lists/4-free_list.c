#include "lists.h"
#include <stdlib.h>

/**
 * free_list - This function fress the list_t list.
 * @head: This is a pointer to a list_t list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
