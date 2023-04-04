#include "lists.h"

/**
 * pop_listint - A listint_t list head node gets deleted.
 * @head: An address pointer of the
 *        head of the listint_t list.
 *
 * Return: Given that the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	ret = (*head)->n;
	tmp = *head;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
