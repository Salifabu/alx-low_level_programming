#include "lists.h"
#include <stdio.h>

/**
 * listint_len - the number of elements in a linked lists returns
 * @h: type listint_t to traverse linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
{
	h = h->next;
	n++;
}
	return (n);
}
