#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - computes length of input string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 *
 * Return: 0 on success.
 */
int multiply(char *num1, char *num2)
{
	int i, j, len1, len2, len_result;
	int *result;
	int carry, n1, n2, sum;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len_result = len1 + len2;
	result = calloc(len_result, sizeof(int));

	if (result == NULL)
	{
		printf("Error: Memory allocation failed\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}

		if (carry > 0)
			result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len_result && result[i] == 0)
		i++;

	if (i == len_result)
		printf("0");
	else
	{
		for (; i < len_result; i++)
			printf("%d", result[i]);
	}

	printf("\n");
	free(result);
	return (0);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or 98 if there is an error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error: Incorrect number of arguments\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i] != '\0'; i++)
	{
		if (!is_digit(num1[i]))
		{
			printf("Error: Invalid argument num1\n");
			return (98);
		}
	}

	for (int i = 0; num2[i] != '\0'; i++)
	{
		if (!is_digit(num2[i]))
		{
			printf("Error: Invalid argument num2\n");
			return (98);
		}
	}

	multiply(num1, num2);

	return (0);
}

