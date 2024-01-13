#include <stdio.h>
#include <string.h>

/**
 * generate_key -  a key generated based on the username.
 * @username: The username for which the key is generated.
 */

void generate_key(const char *username)
{
	int key = 0;
	size_t i;

	for (i = 0; i < strlen(username); i++)
{
	key += username[i];
}

	printf("Generated Key for %s: %d\n", username, key);
}

/**
 * main - function to execute the keygen 1 or 0
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, 1 on failure.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
{
	fprintf(stderr, "Usage: %s username\n", argv[0]);
	return (1);
}

	generate_key(argv[1]);

	return (0);
}

