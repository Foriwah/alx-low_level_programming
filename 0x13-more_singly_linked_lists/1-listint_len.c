#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - number of elements
 * @h: pointer to singly list
 * Return: Return the number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t mySize = 0;

	while (h)
	{
		h = h->next;
		mySize++;
	}
	return (mySize);
}
