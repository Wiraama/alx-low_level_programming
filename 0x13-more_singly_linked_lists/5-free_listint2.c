#include "lists.h"

/**
 * free_listint2 - main entry point
 * @head: pointer to pointer pointing first node
 *
 * Return: freed memory
 */
void free_listint2(listint_t **head)
{
	listint_t *traverse;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		traverse = (*head)->next;
		free(*head);
		*head = traverse;
	}
	*head = NULL;
}
