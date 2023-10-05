#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concetenate two string
 * @s1: first string
 * @s2: second
 * Return: pointer to the string conc. whic memory is allocated
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, x, y;
	char *ptr;

	if (s1 == NULL)
{
	s1 = "";
}
	if (s2 == NULL)
{
	s2 = "";
}
	len1 = 0;
	while (s1[len1] != '\0')
{
	len1++;
}
	len2 = 0;
	while (s2[len2] != '\0')
{
	len2++;
}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
{
	free(ptr);
	return (NULL);
}
	for (x = 0; x < len1; x++)
{
	ptr[x] = s1[x];
}
	for (y = 0; y <= len2; y++)
{
	ptr[x] = s2[y];
	x++;
}
	return (ptr);
}
