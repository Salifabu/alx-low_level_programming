#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a pointer to a new space in memory & duplicate the string it
 * at the new space
 * @str: initial input string
 * Return: pointer he memory allocated as an array of characters
 */
char *_strdup(char *str)
{
	size_t x, y;
	char *strdout;

	if (str == NULL)
{
	return (NULL);
}
	x = 0;
	while (str[x] != '\0')
{
	x++;
}
	strdout = (char *) malloc(sizeof(char) * (x + 1));
	if (strdout == NULL)
{
	return (NULL);
}
	for (y = 0; y <= x; y++)
{
	strdout[y] = str[y];
}
	return (strdout);
}
