#include "lists.h"

/**
 * free_listint - main entry point
 * @head: head pointer of the first node
 *
 * Return: frred space
 */

void free_listint(listint_t *head)
{
	listint_t *temp; /** create a temporary pointer pointing current space**/

	while (head != NULL)
	{
		temp = head; /**stores andress of current node in a pointer **/
		head = head->next; /** point to the next node **/
		free(temp);
	}
}
