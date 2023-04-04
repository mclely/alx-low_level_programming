#include "lists.h"

/**
 * insert_nodeint_at_index - At a given position of listint_t
 *                           list inserts a new node.
 * @head: The address pointer of the
 *        head of the listint_t list.
 * @idx: The listint_t list index where the new
 *       node should be included - indices commences at 0.
 * @n: Contains the integer for the new node.
 *
 * Return: If the function is unsuccessful - NULL.
 *         else - the new node address.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
