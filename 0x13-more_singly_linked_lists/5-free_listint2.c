#include "lists.h"

/**
 * free_listint2 - main entry point
 * @head: pointer to pointer pointing first node
 *
 * Return: freed memory
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	/** to free each node **/
	while (*head != NULL)
	{
		temp = *head; /** creting value of head to temp **/
		*head = (*head)->next; /**pointing to next node **/
		free(temp);
	}
	*head = NULL;
}
