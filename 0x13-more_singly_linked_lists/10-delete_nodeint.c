#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete at index
 * @head: head pointer
 * @index: index to delete from
 * Return: Return an integer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *previous;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	for (node = *head; index && node->next != NULL; index--, node = node->next)
		previous = node;
	if (index)
		return (-1);
	previous->next = previous->next->next;
	free(node);
	return (1);
}
