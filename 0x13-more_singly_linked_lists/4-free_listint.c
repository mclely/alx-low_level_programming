#include "lists.h"

/**
 * free_listint - Frees the list of listint_t.
 * @head: listint_t list pointer to the head to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
