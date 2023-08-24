#include "lists.h"


/**
 * add_node - This adds a new_node  to the beginning
 *            of a list_t list.
 * @head: A pointer pointing to the head of the list_t list.
 * @str: String to be added to the list_t list.
 *
 * Return: NULL-- if the function fails.
 *         Else - the address of the new_node value.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
