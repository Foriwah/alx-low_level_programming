#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function to print a linked list
 * @h: pointer to our list struct
 * Return: return the number of elements
 */

size_t print_list(const list_t *h)
{
	size_t mySize = 0;

	while (h)
	{
		if ((h->str) == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		mySize++;
	}
	
	return (mySize);
}	
