#include "main.h"

/**
 * -strcat - a function that concortenate two strings
 * @dest: destination string
 * @src: source string
 * @n; number of element to concertenate
 * Return: dest + number of src
 */

char *_strcat(char *dest, char *src)
{
	int len_dest, i, n;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
{

	for (i = 0; src[i] != 0 && i < n; i++)
{
	dest[len_dest + i] = src[i];
}
	return(dest);
}
}
