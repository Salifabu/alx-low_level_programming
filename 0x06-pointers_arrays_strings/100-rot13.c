#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @str: set of strings to be encoded
 * Return: string out
 */

char *rot13(char *str)
{
	int k, r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; str[k] != '\0'; k++)
{
	for (r = 0; r < 52; r++)
{
	if (str[k] == data1[r])
{
	str[k] = datarot[r];
	break;
}
}
}
	return (str);
}
