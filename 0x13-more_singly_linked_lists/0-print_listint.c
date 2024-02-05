#include "lists.h"

/**
 * printIlistsint - main entry point\
 * @h: head fuction
 *
 * Return: output to main function
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;
	while (h != 0)
	{
		printf("%d\n", h->n);
		i++;
		/** here i represents counting **/
		h = h->next;/** moving to next node **/
	}
	return (i);
}
