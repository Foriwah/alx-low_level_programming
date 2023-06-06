#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the index
 * @head: the head node
 * @index: the index
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int myIndex = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (myIndex == index)
			return (head);
		head = head->next;
		myIndex++;
	}
	return (NULL);
}
