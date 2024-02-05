#include "lists.h"

/**
 * listint_len - main entry point to function
 * @h: parameter to point to current node
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	/** point to the first node **/
	while (h != 0)
	{
		count++;
		h = h->next; /** points to next node **/
	}

	return (count);
}
