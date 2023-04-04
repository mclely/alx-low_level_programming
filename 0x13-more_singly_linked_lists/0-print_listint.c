#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of the list of listint_t.
 * @h: A pointer to the head of the list of list_t.
 *
 * Return: The number of nodes in the list of list_t.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
