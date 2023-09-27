#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @str: set of strings to be encoded
 * Return: string out
 */

char *rot13(char *str)
{
	int i, j;
	char c[] = "ABUCDEGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; c[j] != '\0'; j++)
{
	if (str[i] == c[j])
{
	str[i] = d[j];
	break;
}

}
}
	return (str);
}
