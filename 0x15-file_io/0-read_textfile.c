#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Prints a text file to POSIX stdout after it has been read.
 * @filename: The name of the files pointer.
 * @letters: The exact number of letters to be printed
 *           as per the function
 *	and after it has been read
 *
 * Return: If the function fails.
 *         O/w - the actual number of bytes that can be read
 *	and printed by the function
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(o, buffer, letters);
	c = write(STDOUT_FILENO, buffer, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (c);
}
