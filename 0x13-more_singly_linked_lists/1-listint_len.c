#include "lists.h"


size_t listint_len(const listint_t *h)
{
	int count =0;

	/** point to the first node **/
	while (h != 0)
	{
		count++;
		h = h->next; /** points to next node **/
	}

	return (count);
}
