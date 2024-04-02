#include "lists.h"

/**
 * insert_dnodeint_at_index - main entry point
 * @h: head node
 * @n: integer
 * @idx: index
 *
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	/** checking if index is zeroc**/
	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = newnode;
		}
		*h = newnode;
	}

	temp = *h;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = temp->next;
	newnode->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}
