#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum the data of list
 * @head: the head node
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int n;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		n = head->n;
		sum = sum + n;
		head = head->next;
	}
	return (sum);
}
