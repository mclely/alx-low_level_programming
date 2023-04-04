#include "lists.h"

/**
 * get_nodeint_at_index - Locates a listint_t linked
 *                        list given node.
 * @head: The listint_t list pointer to the head.
 * @index: The node to locate index - indices start at 0.
 *
 * Return: If there is no node - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
