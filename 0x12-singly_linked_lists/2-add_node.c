#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of list.
 * @head: pointer to singly linked list.
 * @str: pointer to signly linked list.
 *
 * Return: The address of the new element or NULL if it failed.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	/* if it fails returb NULL */
	if (new_node == NULL)
		return (NULL);
	/* loop through the string to find length */
	while (str[length])
		length++;
	new_node->len = length;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
