#include "lists.h"

/**
 * sum_listint - Calculates the addition of all the
 *               data (n) of a listint_t list.
 * @head: The head of the listint_t list pointer.
 *
 * Return: If there is an empty list - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
