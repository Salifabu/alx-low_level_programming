#include "main.h"

/**
 * _strlen_recursion - print a string length
 *
 * @s: the string
 *
 * Return: length of a string in int
 *
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
{
	return (1 + _strlen_recursion(s + 1));

}
	return (0);
}
