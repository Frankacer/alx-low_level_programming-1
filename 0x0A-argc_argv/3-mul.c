#include <stdio.h>

/**
 * main - prints the product of two numbers passed as
 * arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if ((argc < 3) || (argc > 3))
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\t%d\n", n1 * n2);

	return (0);
}
