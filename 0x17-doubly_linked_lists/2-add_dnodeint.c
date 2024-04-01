#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	/*allocating memory**/
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	/**cheking if allocation is successfull**/
	if (newnode == NULL)
	{
		return (NULL);
	}

	/**initialnizing**/
	newnode->n = n;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}

	return (newnode);
}
