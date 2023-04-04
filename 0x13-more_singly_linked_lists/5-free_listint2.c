#include "lists.h"

/**
 * free_listint2 - Frees the list of a listint_t.
 * @head: The address pointer of the
 *        head of the listint_t list.
 *
 * Description: The head is set to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
