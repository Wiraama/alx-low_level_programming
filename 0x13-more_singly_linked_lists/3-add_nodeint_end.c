#include "lists.h"

/**
 * add_nodeint_end - main entry point
 * @head: the biggining of node
 * @n: the unknown position of current node
 *
 * Return: to main for execution
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *counter = *head;

	/** allocating memory **/
	listint_t *end_node = (listint_t *)malloc(sizeof(listint_t));

	/** checking if memory allocated **/
	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = n; /** assigning new value to n node **/

	end_node->next = NULL; /**setting to end node **/

	/** making nest to be null**/
	if (*head == NULL)
	{
		*head = end_node;
	}

	else
	{
		while (counter->next != 0) /**ensure counter is not null**/
		{
			counter = counter->next;
		}
		counter->next = end_node;

	}

	return (end_node);
}
