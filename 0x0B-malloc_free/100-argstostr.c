#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - Copies input string
 * @dest: destination string
 * @src: source string
 *
 * Return: returns pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\n';
	return (dest);
}

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
 * argstostr - concatenates all arguments of program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: returns pointer to concatenated string, NULL
 * otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *s, *dest;

	len = 0;

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	s = malloc(len + ac + 1);

	if (s == NULL)
		return (NULL);

	dest = s;

	for (j = 0; j < ac; j++)
	{
		dest = _strcpy(dest, av[j]);
		dest += (_strlen(av[j]) + 1);
	}
	*dest = '\0';
	return (s);
}

