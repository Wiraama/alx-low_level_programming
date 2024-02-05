#include "lists.h"

/**
 * add_nodeint - main entry point
 * @head: first node in the biggining
 * @n: current node
 *
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/** allocating memory **/
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	/** checking if memory allocation is allocated **/
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n; /**this assigns new node to n **/

	new_node->next = *head; /**subjecting new node to point to the current head**/

	*head = new_node; /** this keeps new node infront **/

	return (new_node);
}
