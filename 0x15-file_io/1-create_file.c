#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to be written to file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int len = _strlen(text_content), fd = 0;
	char *buffer = malloc(len);

	if (!filename || !buffer)
		return (1);

	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
	{
		free(buffer);
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
		len = _strlen(text_content);
	}
	err = write(fd, buffer, len);
	if (err == -1)
	{
		close(fd);
		free(buffer);
		return (-1);
	}
	close(fd);
	free(buffer);
	return (1);
}

