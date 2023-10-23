#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - it deletes head node of a linked list
 * @head: first element in the linked list pointer
 *
 * Return: data inside the elements deleted,
 * or 0 if an empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int j;

	if (!head || !*head)
	return (0);
	j = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (j);
}
