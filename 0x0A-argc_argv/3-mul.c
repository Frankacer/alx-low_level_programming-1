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

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);

	printf("%d\n", n1 * n2);

	return (0);
}
