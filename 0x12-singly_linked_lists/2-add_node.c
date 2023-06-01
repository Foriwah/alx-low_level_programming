#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adding a node
 * @head: the head
 * @str: the string element
 * Return: Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
