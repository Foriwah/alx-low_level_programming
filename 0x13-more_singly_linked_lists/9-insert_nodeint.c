#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert at index
 * @head: the head pointer
 * @idx: the index
 * @n: the value
 * Return: something
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = (*head);
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = temp->next;
	temp->next = node;
	return (node);
}
