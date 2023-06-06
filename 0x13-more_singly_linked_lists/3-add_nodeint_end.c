#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a note at the end
 * @head: the head node
 * @n: the value
 * Return: address or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *lastnode = *head;

	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = NULL;

	if (head == NULL)
		return (NULL);
	if (lastnode == NULL)
		return (NULL);

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
