#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a node at the end
 * @head: our head node
 * @str: string value
 * Return: return address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *lastnode = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = node;
	return (node);
}
