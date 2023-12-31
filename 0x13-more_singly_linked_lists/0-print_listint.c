#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all linked list elements
 * @h: type listint_t linked list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
{
	j++;
	printf("%d\n", h->n);
	h = h->next;
}
	return (j);
}
