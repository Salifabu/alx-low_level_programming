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
	int len2, len3, i;

	for (len2 = 0; dest[len2] != '\0'; len2++)
	{
	}
	for (len3 = 0; src[len3] != '\0'; len3++)
	{
	}
	for (i = 0; i <= len3; i++)
	{
		dest[len2 + 1] = src[i];
	}
	return (dest);
}
