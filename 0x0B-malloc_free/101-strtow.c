#include "main.h"
#include <stdlib.h>
#define MAX_WORD_SIZE 100

/**
 * numw - calculates number of words in a string
 * @str: string
 * Return: returns result
 */
int numw(char *str)
{
	int i, w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			w++;
		i++;
	}
	w++;
	return (w);
}
/**
 * WordSplit - helper function
 * @dest: buffer
 * @str: string to be split
 * Return: pointer to first word of string
 */
char **WordSplit(char **dest, char *str)
{
	int i, l, c;
	char **ArrayWords;

	ArrayWords = dest;
	i = 0;
	l = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			c = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				ArrayWords[l][c] = str[i];
				i++;
				c++;
			}
			ArrayWords[l][c] = '\0';
			l++;
		}
		else
		{
			i++;
		}
	}
	ArrayWords[l] = NULL;
	return (dest);
}

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: returns pointer first word in string, otherwise
 * NULL
 */
char **strtow(char *str)
{
	int j, k, w;
	char **ArrayWords;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/*Calculate number of words in string*/
	w = numw(str);

	/*Allocate memory for array of words*/
	ArrayWords = malloc(sizeof(char *) * (w + 1));

	/*Check if memory allocation was successful*/
	if (ArrayWords == NULL)
		return (NULL);

	/*Allocate memory for pointer to char in words*/
	for (j = 0; j < w; j++)
	{
		ArrayWords[j] = malloc(MAX_WORD_SIZE);

		if (ArrayWords[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(ArrayWords[k]);
			free(ArrayWords);
			return (NULL);
		}
	}

	/*split string into words*/
	return (WordSplit(ArrayWords, str));
}

