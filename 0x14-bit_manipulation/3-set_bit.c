#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at an index.
 * @n: number to set
 * @index: index of the set bit
 *
 * Return: 1 if successful, or -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);
	x = 1 << index;
	*n = (*n | x);
	return (1);
}
