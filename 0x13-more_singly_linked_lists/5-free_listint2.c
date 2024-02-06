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

	/** to free each node **/
	while (*head != NULL)
	{
		temp = *head; /**allocating head detaials to temp **/

		*head = (*head)->next; /**pointing to next node **/

		free(temp);
	}
	*head = NULL;
}
