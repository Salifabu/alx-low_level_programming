#include "main.h"
#include <stdlib.h>

/**
 * _calloc - memory allocated for an array
 *
 * @nmemb:no of block of the memory
 * @size: size of the element int
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t j;

	if (nmemb == 0 || size == 0)
	return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	return (NULL);
	for (j = 0; j < (nmemb * size); j++)
	p[j] = 0;
	return (p);
}
