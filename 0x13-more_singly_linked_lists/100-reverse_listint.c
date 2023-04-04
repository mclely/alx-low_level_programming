#include "lists.h"

/**
 * reverse_listint - Alters the list of listint_t.
 * @head: The address of the head of
 *        the list_t list pointer.
 *
 * Return: The reversed list of the first nodes pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
