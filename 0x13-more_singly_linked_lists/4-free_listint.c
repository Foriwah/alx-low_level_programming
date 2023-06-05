#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free a list
 * @head: the head
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	if (head == NULL)
		return;

	for (node = head->next; head != NULL; head = node)
	{
		node = head->next;
		free(head);
	}
}
