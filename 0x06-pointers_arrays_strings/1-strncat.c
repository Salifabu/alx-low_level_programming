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
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
{
	dest[len_dest + i] = src[i];
}

	for (i = 0; src[i] != 0 && i < n; i++)
{
	dest[len_dest + i] = src[i];
}

	return (dest);
}
