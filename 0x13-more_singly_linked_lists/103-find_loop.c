#include "lists.h"

/**
 * find_listint_loop - Finds the loop that is in
 *	a listint_t linked list.
 * @head: The head of the listint_t list pointer.
 *
 * Return: If no loop is found - NULL.
 *         else - the address of the node that starts the loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *tortoise;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
