#include "lists.h"

/**
 * insert_nodeint_at_index - main entry point
 * @head: first node
 * @idx: index
 * @n: integer
 *
 * Return: new created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL || idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		free(new_node);

		return (new_node);
	}

	temp = *head;
	for (i = 0; temp != NULL && i < idx - 1; i++)
	{
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	/** checks if idx is beynd **/
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	return (new_node);
}
