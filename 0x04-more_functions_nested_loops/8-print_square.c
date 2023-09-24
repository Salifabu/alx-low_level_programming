#include "main.h"

/**
 * print_square - function to print a square
 * @size: size of square
 * Description: you can only use _putchar to print. Using "#" to print square
 *
 */
void print_square(int size)

{
	int a, b;

	b = 0;

	if (size < 1)

	_putchar('\n');
	while (b < size)

{
	a = 0;
	while (a < size)
{
	_putchar('#');
	a++;
}

	_putchar('\n');
	b++;
}
}
