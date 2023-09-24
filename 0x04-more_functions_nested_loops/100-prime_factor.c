#include "stdio.h"

/**
 * main - a function that print largset prime factor of the following numbers 61285275143
 *
 * Return: 0 all the time
 */

int main(void)
{
	long prime = 61285275143, divisor;
	while (divisor < (prime / 2))
{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (divisor = 3; divisor < (prime / 2); divisor += 2)
		{
			if ((prime % divisor) == 0)
				prime /= divisor;
		}
}
	printf("\% 1d\n", prime);
	return (0);
}
