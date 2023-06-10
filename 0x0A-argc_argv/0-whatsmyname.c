#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name the of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (EXIT_SUCCESS);
}
