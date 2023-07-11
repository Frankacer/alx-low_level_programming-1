#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters that could be read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_read = 0, letters_printed = 0;
	int fd = 0;
	char *buffer = malloc(letters);

	if (filename == NULL || buffer == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	letters_read = read(fd, buffer, letters);
	if (letters_read == -1)
		return (0);

	letters_printed = write(1, buffer, letters_read);
	if (letters_printed == -1 || letters_printed < letters_read)
		return (0);

	close(fd);
	return (letters_printed);
}

