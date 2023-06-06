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
	listint_t *node;
       	listint_t *temp = NULL;
	unsigned int i = idx;

	if (head == NULL)
		return (NULL);
	for (node = *head; i && node != NULL; i--, node = node->next)
	{
		temp = node;
	}
	if (i)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	if (temp != NULL)
	{
		node->next = temp->next;
		temp->next = node;
	}
	else
	{
		node->next = NULL;
	}
	if (*head == NULL || idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	node->n = n;
	return (node);
}
