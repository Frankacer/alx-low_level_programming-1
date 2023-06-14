#include "main.h"
#include <stdlib.h>

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
 * _strdup - duplicates input string
 * @str: input string
 *
 * Return: returns pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *dup_s;
	int i;

	if (str == NULL)
		return (NULL);

	dup_s = malloc(sizeof(char) * _strlen(str));

	if (dup_s == NULL)
		return (NULL);

	while (*str)
	{
		*dup_s = *str;
		str++;
		i++;
	}
	dup_s = '\0';

	return (dup_s);
}

