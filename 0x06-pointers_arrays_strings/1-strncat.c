#include "main.h"

/**
 * _strncat - a function that concortenate two strings
 * @dest: destination string
 * @src: source string
 * @n: no of element to be concertenate from src
 * Return: dest + number of src
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, r;

	k = 0;
	r = 0;

	while (dest[k] != '\0')
{
	k++;
}
	while (r < n && src[r] != '\0')
{
	dest[k] = src[r];
	k++;
	r++;
}
	dest[k] = '\0';
	return (dest);
}
