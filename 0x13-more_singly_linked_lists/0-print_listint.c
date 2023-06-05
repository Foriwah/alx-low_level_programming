#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - print a singly linked list
 * @h: pointer for list
 * Return: Return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t mySize = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		mySize++;
	}
	return (mySize);
}
