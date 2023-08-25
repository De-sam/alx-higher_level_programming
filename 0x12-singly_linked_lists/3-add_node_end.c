#include "lists.h"


/**
 * add_node_end - A new_node would be added at the end
 *                of the list_t list.
 * @head: Points to the head of the list_t list.
 * @str: String to be added to the list_t list.
 *
 * Return: NULL -- if the function fails.
 *         Else -- the address to the new_node value.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (*head);
}

