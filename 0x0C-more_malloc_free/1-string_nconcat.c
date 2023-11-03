#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings & second is an integer
 *
 * @s1: string one
 * @s2: string two
 * @n: number values to concatenate from s2
 *
 * Return: pointer to new memory allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, j;
	char *s;

	if (s1 == NULL)
	a = 0;
	else
{
	for (a = 0; s1[a] != '\0'; a++)
	;
}
	if (s2 == NULL)
	b = 0;
	else
{
	for (b = 0; s2[b] != '\0'; b++)
	;
}
	if (b > n)
	b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
	return (NULL);
	for (j = 0; j < a; j++)
	s[j] = s1[j];
	for (j = 0; j < b; j++)
	s[j + a] = s2[j];
	s[a + b] = '\0';
	return (s);
}
