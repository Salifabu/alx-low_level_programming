#include "main.h"

/**
 * _strlen – returns length of a string
 * @s: string
 * Return: length (l)
 */

int _strlen(char *s)
{
int longi = 0;
While(*s != '\0')

{
			longi++;
			s++;
}
return (longi);
}
