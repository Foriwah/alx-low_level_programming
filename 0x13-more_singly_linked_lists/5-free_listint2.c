#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free a the list
 * @head: the singly linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL || *head == NULL)
		return;

	for (node = (*head)->next; *head != NULL; *head = node)
	{
		node = (*head)->next;
		free(*head);
	}
}
