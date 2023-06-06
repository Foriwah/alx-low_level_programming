#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - pop node at begining
 * @head: the pointer to the head node
 * Return: Return the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (n);
}
