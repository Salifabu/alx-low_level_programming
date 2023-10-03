#include "main.h"
/**
 * _strncpy - copies  strings
 *
 * @dest: destination string
 * @src: sourse string
 * @n: number strings to copy
 *
 * Return: destination char pointer to the string
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
{
	dest[i] = src[i];
}
	for (i = i; i < n; i++)
{
	dest[i] = '\0';
}
	return (dest);
}
