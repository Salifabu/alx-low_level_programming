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
	int len_dest, j;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)

	for (j = 0; src[j] != 0 && j < n; j++)
{
	dest[len_dest + j] = src[j];
}
	return (dest);
}
