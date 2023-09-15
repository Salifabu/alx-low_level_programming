#include "main.h"

/**
 * _isupper - checks for lowercase character
 *@c:The character to be checked
 *Return: 1 for uppercase character or 0 for anything else
 */

int _isupper(int a)

{
if (a >= 65 && a <= 90)
{
return (1);
}
return (0);
}
