#include "lists.h"

size_t free_listint_safe(listint_t **h);
size_t looped_listint_count(listint_t *head);

/**
 * looped_listint_count - in a looped listint_t linked list
 *                      it counts the number of unique nodes.
 * @head: A pointer to check of the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         else - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *hare, *tortoise;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: The head of the listint_t list
 *     pointer to an address.
 *
 * Return: The freed list size.
 *
 * Description: It sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
