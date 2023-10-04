#include <stdio.h>
/**
 * main - prints the arguments receive
 * @argc: command line arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
{
	printf("%s\n", argv[j]);
}
	return (0);
}
