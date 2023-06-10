#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		else if (result > 0)  /* stop if we encounter non-digit after digits */
			break;
		s++;
	}

	return (result * sign);
}

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
		result += _atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
