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

	if (head == NULL)
		return (NULL);
	if (lastnode != NULL)
	{
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if(*head == NULL)
	{
		*head = node;
		node->next = NULL;
	}
	else
	{
		last->next = node;
		node->next = NULL;
	}
	return (node);
}
