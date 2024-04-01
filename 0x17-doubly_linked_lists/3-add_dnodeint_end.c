#include "lists.h"

/**
 * add_dnodeint_end - main entry point
 * @head: first node
 * @n: integer
 *
 * Return: newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *last;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	/** initializing**/
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		(*head) = newnode;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newnode;
	}

	return (newnode);
}
