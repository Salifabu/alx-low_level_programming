#include "main.h"

/**
 * _strcat - a function that concortenate two strings
 * @dest: destination string
 * @src: source string
 * @n; number of element to concertenate
 * Return: dest + number of src
 */

char *_strcat(char *dest, char *src)
{
int k, r;

	k = 0;
	r = 0;

	while (dest[k] != '\0')
{
	k++;
}
	while (src[r] != '\0')
{
	dest[k] = src[r];
	k++;
	r++;
}
	dest[k] = '\0';
	return (dest);
}
