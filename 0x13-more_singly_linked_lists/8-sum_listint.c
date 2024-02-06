#include "lists.h"

/**
 * sum_listint - main entry point
 * @head: first node
 *
 * Return: summed nodes
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum =0;

	if (head == NULL)
	{
		return (0);
	}
	/**
	 * in the for loop 
	 * ; initializes
	 * head != NULL - to exit loop when null
	 * head = head->next - point to the next node
	 */
	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}


	return (sum);
}
