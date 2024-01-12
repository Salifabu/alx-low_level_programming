#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
{
	h = h->next;
	node_count++;
}

	return (node_count);
}
