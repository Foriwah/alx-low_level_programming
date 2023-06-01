#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - number of elements in list
 * @h: pointer to linked list
 * Return: return the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t mySize = 0;

	while (h)
	{
		h = h->next;
		mySize++;
	}
	return (mySize);
}
