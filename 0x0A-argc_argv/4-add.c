#include <stdio.h>

/**
 * main - prints the sum of numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	result = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if ((argv[i][j] < '0') || (argv[i][j] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
