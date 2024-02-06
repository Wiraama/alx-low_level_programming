#include "lists.h"

/**
 * get_nodeint_at_index - main entry point
 * @head: first node
 * @index: counts
 *
 * Return: ntn node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;


	/** part to check nly if it is null **/
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
