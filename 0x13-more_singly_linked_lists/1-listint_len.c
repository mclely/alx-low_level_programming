#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 *               in the list of linked listint_t.
 * @h: A pointer to the head of the list of listint_t.
 *
 * Return: The number of elements in the list of listint_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
