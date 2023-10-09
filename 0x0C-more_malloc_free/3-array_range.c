#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: int pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int j, n;
	int *c;

	if (min > max)
	return (NULL);
	n = max - min + 1;
	c = malloc(sizeof(int) * n);
	if (c == NULL)
	return (NULL);
	for (j = 0; j < n; j++)
{
	c[j] = min;
	min++;
}
	return (c);

}
