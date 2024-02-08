#include "lists.h"

/**
 * print_listint_safe - prints a list
 * @head: address of pointer to first node
 *
 * Return: address of head
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n); /** print first node items **/
		if (head->next < head) /** check if next node is < first node **/
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}

	}
	return (0);
}
