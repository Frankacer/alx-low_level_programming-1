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
 * _strncpy - copies up to n characters from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src && n)
	{
		/*check if n is greater than string size*/
		if (!(*src) && n)
			dest[i] = '\0';
		else
			dest[i] = *src;
		src++;
		i++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, concat_len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		concat_len = len1 + len2;
	else
		concat_len = len1 + n;

	concat = malloc(sizeof(char) * (concat_len + 1));
	if (concat == NULL)
		return (NULL);

	strncpy(concat, s1, len1);
	if (n >= len2)
		_strncpy(concat + len1, s2, len2);
	else
		_strncpy(concat + len1, s2, n);

	concat[concat_len] = '\0';

	return (concat);
}

