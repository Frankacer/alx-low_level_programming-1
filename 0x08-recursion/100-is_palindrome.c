#include "main.h"

/**
 * _strlen_recursion - gets string size by recursion
 * @s: input string
 *
 * Return: returns result
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_helper - helos is_palindrome function
 * @s: inout string
 * @len: length of string
 *
 * Return: returns 1 if string is a palindrome and 0
 * otherwise.
 */
int is_palindrome_helper(char *s, int len)
{
	if (len == 0 || len == 1)
		return (1);
	else if (s[0] == s[len - 1])
	{
		return (is_palindrome_helper(s + 1, len - 2));
	}
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: inout string
 *
 * Return: returns 1 if string is a palindrome and 0
 * otherwise.
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, _strlen_recursion(s)));
}


