#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the linked list elements
 * @h: pointer to the list_t list to print
 * Return: printed number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%d] %s\n", size_t(i), h->str);
	h = h->next;
	i++;
}
	return (i);
}
