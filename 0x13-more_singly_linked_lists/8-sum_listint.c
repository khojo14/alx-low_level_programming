#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) in a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
