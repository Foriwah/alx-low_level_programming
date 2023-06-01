#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * free_list - free the list
 * @head: the list
 */

void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
		return;
	node = head->next;

	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = node;
		if (head != NULL)
			node = head->next;
	}
}
