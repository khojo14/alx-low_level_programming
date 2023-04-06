#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node at beginning of a listint_t list.
 *
 * @head: pointer to pointer to the head of the list
 * @n: integer to add to the list
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
