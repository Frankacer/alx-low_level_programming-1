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
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns pointer to duplicated str, otherwise, NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	size_t i, j, len;

	/*Treat NULL input as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*calculate string length and check for overflow*/
	len = _strlen(s1) + _strlen(s2) + 1;
	if (len <= _strlen(s1) || len <= _strlen(s2))
	{
		return (NULL); /* Overflow occurred */
	}

	/*allocate dynamic memory to string*/
	s = malloc(len);

	/*condition for unsuccessful allocation*/
	if (s == NULL)
	{
		return (NULL);
	}

	/*assign contents of s1 to s*/
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	/*assign contents of s2 to s*/
	for (j = 0; s2[j] != '\0'; j++)
		s[i++] = s2[j];

	/*terminate string*/
	s[i] = '\0';

	return (s);
}

