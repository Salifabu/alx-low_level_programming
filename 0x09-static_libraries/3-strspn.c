#include "main.h"

/**
  * _strspn - main function
  *
  * @s: Function parameter
  *
  * @accept: Function parameter
  *
  * Return: Always 0.
  */

unsigned int _strspn(char *s, char *accept)

{

	unsigned int _strspn(char *s, char *accept);

	unsigned int i = 0;

	int c;

	while (*s)

{

	for (c = 0; accept[c]; c++)

{

	if (*s == accept[c])

{

	i++;

	break;

}

	else if (accept[c + 1] == '\0')

	return (i);

}

	s++;

}
	return (i);
}
