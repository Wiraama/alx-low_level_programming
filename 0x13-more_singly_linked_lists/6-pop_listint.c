#include "lists.h"

/**
 * pop_listint - main entry point
 * @head: hesd node
 *
 * Return: data was in end
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;

	temp = *head;
	*head = (*head)->next; /**replacing head to next node**/
	free(temp);
	return (data); /** data in head **/
}
